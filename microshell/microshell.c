/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:23:30 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/30 16:44:13 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/ucontext.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_micro {
	char **tab;
	int	in;
	int	out;
}t_micro;

int	ft_putstr_error(char *str, char *str2)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
	i = 0;
    while (str2 && str2[i])
    {
        write(2, &str2[i], 1);
        i++;
    }
    write(2, "\n", 1);
	return (0);
}
//PARSING//

int	parsing_nb_cmd(char **argv, int argc)
{
	int	nb_cmd = 0;
	int	i = 1;

	if (argc == 1)
		return (0);
	while (argv[i])
	{
		while (i < argc && (!strncmp(argv[i], ";", 2) || !strncmp(argv[i], "|", 2)))
			i++;
		if (i < argc && strncmp(argv[i], ";", 2) && strncmp(argv[i], "|", 2))
			nb_cmd++;
		while (i < argc && strncmp(argv[i], ";", 2) && strncmp(argv[i], "|", 2))
			i++;
	}
	return (nb_cmd);
}

char *ft_strdup(char *str)
{
	int		i;
	int		len;
	char 	*new = NULL;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

void	ft_init_struct(t_micro *shell, int nb_cmd)
{
	int i = 0;

	while (i < nb_cmd)
	{
		shell[i].in = -1;
		shell[i].out = -1;
		i++;
	}
}

char **realloc_tab(char **tmp, char *cmd)
{
	int		i = 0;
	char	**new;

	while (tmp && tmp[i])
		i++;
	new = malloc(sizeof(char *) * (i + 2));
	if (!new)
		return (NULL);
	i = 0;
	while (tmp && tmp[i])
	{
		new[i] = tmp[i];
		i++;
	}
	if (tmp)
		free(tmp);
	new[i] = cmd;
	new[++i] = NULL;
	return (new);
}

char **ft_init_tab(char **tmp)
{
	int	i = 0;
	char	**new;

	while (tmp && tmp[i])
		i++;
	new = malloc(sizeof(char *) * (i + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (tmp && tmp[i])
	{
		new[i] = tmp[i];
		i++;
	}
	new[i] = NULL;
	return (new);
}

void	*ft_init_cmds(t_micro *shell, char **argv, int argc) 
{
	char **tmp = NULL;
	int	i = 1;
	int	y = 0;

	while (i < argc)
	{
		if (!strncmp(argv[i - 1], "|", 2))
			shell[y].in = 1;
		while (i < argc && strncmp(argv[i], "|", 2) && strncmp(argv[i], ";", 2))
		{
			tmp = realloc_tab(tmp, argv[i]);
			if (!tmp)
				return (NULL);
			i++;
		}	
		if (i < argc && !strncmp(argv[i], "|", 2))
			shell[y].out = 1;
		if (tmp)
		{
			shell[y].tab = ft_init_tab(tmp); 
			free(tmp);
			tmp = NULL;
			y++;
		}	
		i++;
	}
	return (shell);
}

t_micro	*parsing(char **argv, int argc)
{
	int nb_cmd;
	t_micro	*shell;

	nb_cmd = parsing_nb_cmd(argv, argc);
	if (nb_cmd == 0)
		return (NULL);
	shell = malloc(sizeof(t_micro) * nb_cmd);
	if (!shell)
	{
		ft_putstr_error("error: fatal", NULL);
		return (NULL);
	}
	ft_init_struct(shell, nb_cmd);
	if (!ft_init_cmds(shell, argv, argc))
	{
		ft_putstr_error("error: fatal", NULL);
		return (NULL);
	}
	return (shell);
}
//END PARSING//
//START EXEC//

int	ft_cd(char **c, int nb_cmd)
{
	char *path;

	if (nb_cmd != 1 || !c[1])
	{
		ft_putstr_error("error: cd: bad arguments", NULL);
		return (1);
	}
	path = c[1];
	if (chdir(path) != 0)
	{
		ft_putstr_error("error: cd: cannot change directory to ", c[1]);
		return (1);
	}
	return (0);	
}

int	ft_no_pipe(char **tab, int fd_in, char **env)
{
	if (fork() == 0)
	{
		dup2(fd_in, 0);
		close(fd_in);
		if (execve(tab[0], tab, env) == -1)
		{
			ft_putstr_error("error: cannot execute ", tab[0]);
			return (-1);
		}
	}
	if (fd_in > 0)
		close(fd_in);
	while (waitpid(-1, NULL, 0) != -1)
		;
	fd_in = 0;
	return (fd_in);
}

void ft_free(t_micro *shell, int nb_cmd);

int	ft_pipe(t_micro *shell, int y, int fd_in, char **env, int nb_cmd)
{
	int	fd[2];

	if (pipe(fd) == -1)
	{
		ft_putstr_error("error: fatal", NULL);
		return (-1);
	}
	if (fork() == 0)
	{
		dup2(fd[1], 1);
		close(fd[0]);
		close(fd[1]);
		dup2(fd_in, 0);
		close(fd_in);
		if (execve(shell[y].tab[0], shell[y].tab, env) == -1)
		{
			ft_putstr_error("error: cannot execute ", shell[y].tab[0]);
			ft_free(shell, nb_cmd);
			exit (-1);
		}
	}	
	close(fd[1]);
	if (fd_in > 0)
		close(fd_in);
	return (fd[0]);
}


void	ft_start_exec(t_micro *shell, int nb_cmd, char **env)
{
	int	fd_in = 0;
	int	y = 0;
	int	z = 0;

	while (y < nb_cmd)
	{
		if (strncmp(shell[y].tab[z], "cd", 3) == 0)
			ft_cd(shell[y].tab, nb_cmd);
		else if (shell[y].out != 1)
			fd_in = ft_no_pipe(shell[y].tab, fd_in, env);
		else if (shell[y].out == 1)
			fd_in = ft_pipe(shell, y, fd_in, env, nb_cmd);
		y++;
	}
	if (fd_in > 0)
		close(fd_in);
}
//END EXEC//

void	ft_free(t_micro *shell, int nb_cmd)
{
	int	i = 0;

	while (i < nb_cmd)
	{
		free(shell[i].tab);
		i++;
	}
	free(shell);
}

int	main(int argc, char **argv, char **env)
{
	t_micro *shell = parsing(argv, argc);
	if (!shell)
		return (1);
	int		nb_cmd = parsing_nb_cmd(argv, argc);
	ft_start_exec(shell, nb_cmd, env);
	ft_free(shell, nb_cmd);
	return (0);
}
