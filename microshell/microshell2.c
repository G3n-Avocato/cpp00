/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:18:23 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/25 12:02:33 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int ft_no_pipe(char**tab, int fd_in, char **env);
int ft_pipe(char**tab, int fd_in, char **env);

typedef struct s_micro {
	char	**tab;
	int		s;
}t_micro;

int	ft_putstr_fd(char *str, char *str2, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	i = 0;
    while (str2 && str2[i])
    {
        write(fd, &str2[i], 1);
        i++;
    }
    write(fd, "\n", 1);
	return (0);
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

int	ft_cd(char **c, int nb_cmd)
{
	char *path;

	if (nb_cmd != 1 || !c[1])
	{
		ft_putstr_fd("error: cd: bad arguments", NULL, 2);
		return (1);
	}
	path = c[1];
	if (chdir(path) != 0)
	{
		ft_putstr_fd("error: cd: cannot change directory to ", c[1], 2);
		return (1);
	}
	return (0);	
}

int	ft_nb_cmds(char **argv)
{
	int	i = 1;
	int	nb_cmd = 1;

	while (argv[i])
	{
		if (strncmp(argv[i], ";", 2) == 0 || strncmp(argv[i], "|", 2) == 0)
			nb_cmd++;
		i++;
	}
	return (nb_cmd);
}

void	ft_error(void) {
	char *str = "error: fatal\n";
	int	i = 0;

	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv, char **env)
{
	t_micro	*shell;
	int	nb_cmd;
	int	i = 1;
	int	u = 1;
	int	y = 0;
	int	z = 0;

	if (argc == 1)
		return (1);
	nb_cmd = ft_nb_cmds(argv);
	shell = malloc(sizeof(t_micro) * nb_cmd);
	if (!shell)
	{
		ft_error();
		return(1);
	}
	while (i <= argc)
	{
		if ((y + 1 == nb_cmd && i == argc) || strncmp(argv[i], ";", 2) == 0 || strncmp(argv[i], "|", 2) == 0)
		{	
			if (y + 1 == nb_cmd && i == argc)
			{
				i = argc;
				shell[y].s = -1;
			}
			else if (strncmp(argv[i], ";", 2) == 0)
				shell[y].s = 0;
			else if  (strncmp(argv[i], "|", 2) == 0)
				shell[y].s = 1;
			shell[y].tab = malloc(sizeof(char *) * (i - u + 1));
			if (!shell[y].tab)
			{
				ft_error();
				return (1);
			}
			while (u < i)
			{
				shell[y].tab[z] = ft_strdup(argv[u]);
				if (!shell[y].tab[z])
				{
					ft_error();
					return (1);
				}
				u++;
				z++;
			}
			shell[y].tab[z] = NULL;
			z = 0;
			u++;
			y++;
		}
		i++;
	}

    int fd_in = 0;
	y = 0;
	z = 0;
	while (y < nb_cmd)
	{
		if (strncmp(shell[y].tab[z], "cd", 3) == 0)
			ft_cd(shell[y].tab, nb_cmd);
		else if (shell[y].s == 0 || y + 1 == nb_cmd)
        {
            fd_in = ft_no_pipe(shell[y].tab, fd_in, env);
            if (fd_in == -1)
                return (1);
        }
		else if (shell[y].s == 1)
		{
		        fd_in = ft_pipe(shell[y].tab, fd_in, env);
                if (fd_in == -1)
                    return (1);
		}
		y++;
	}
    close(fd_in);

	y = 0;
	z = 0;
	while (y < nb_cmd)
	{
		while (shell[y].tab[z])
		{
			free(shell[y].tab[z]);
			z++;
		}
		z = 0;
		free(shell[y].tab);
		y++;
	}
	free(shell);
	return (0);
}