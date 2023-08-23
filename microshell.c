/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:55:11 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/23 13:16:32 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>

typedef struct	s_micro 
{
	char	**c;
	char	sep;
	int		nb_cmd;

}t_micro;

int	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	return (0);
}

int	ft_cd(char **c)
{
	char *path;

	if (!c[1] || c[2])
	{
		ft_putstr_fd("error: cd: bad arguments\n", 2);
		return (1);
	}
	path = c[1];
	if (chdir(path) != 0)
	{
		ft_putstr_fd("error: cd: cannot change directory to ", 2);
		ft_putstr_fd(c[1], 2);
		ft_putstr_fd("\n", 2);
		return (1);
	}
	return (0);	
}

int	ft_init_struct(t_micro **shell, char **argv, int argc)
{
	int	nb_cmds;
	int	i;
	int	y;
	int	z;

	i = 1;
	nb_cmds = 1;
	while (i < argc)
	{
		if (argv[i][0] == ';'|| argv[i][0] == '|')
			nb_cmds++;
		i++;
	}
	*shell = malloc(sizeof(t_micro *) * nb_cmds);
	if (!*shell)
		return (1);
	i = 1;
	y = 0;
	z = 0;
	while (z != nb_cmds)
	{
		if (i == argc || argv[i][0] == ';' || argv[i][0] == '|')
		{
			(*shell)[z].c = malloc(sizeof(char *) * (i - y) + 1);
			if (!(*shell)[z].c)
				return (1);
			(*shell)[z].c[i - y + 1] = NULL;
			(*shell)[z].sep = argv[i][0];
			(*shell)[z].nb_cmd = nb_cmds;
			z++;
			y = i;
		}
		i++;
	}
	return (0);
}

int	ft_parsing(char **argv, int argc, t_micro **shell)
{
	int s;
	int	i;
	int	y;

	if (argc == 1)
	{
		ft_putstr_fd("Need arguments.\n", 1);
		return (1);
	}
	s = 1;
	y = 0;
	i = 0;
	while (s < argc)
	{
		while (argv[s][0] != '|' && argv[s][0] != ';')
		{
			shell[y]->c[i] = argv[s];
			i++;
			s++;
		}
		s++;
		y++;
	}
	return (0);
}

int	main(int argc, char **argv, char **env)
{
	t_micro	*shell;

	ft_init_struct(&shell, argv, argc);
	ft_parsing(argv, argc, &shell);

}
