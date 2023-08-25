/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:56:15 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/25 16:21:07 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/ucontext.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_micro {
	char	**tab;
	int		s;
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

int	parsing_nb_cmd(char **argv, int argc)
{
	int	nb_cmd = 1;
	int	i = 1;
	int	bool = 0;

	if (argc == 1)
		return (0);
	else if (argc == 2 && (strncmp(argv[i], ";", 2) || strncmp(argv[i], "|", 2)))
			return (nb_cmd);
	while (argv[i])
	{
		if (!strncmp(argv[i], ";", 2) || !strncmp(argv[i], "|", 2))
		{
			if (i != 1 && bool != 1)
				nb_cmd++;
			if (bool != -1)
				bool = 1;
		}
		else 
			bool = -1;
		i++;
	}
	if (bool == 1)
		nb_cmd = 0;
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

void	*ft_init_struct_cmd(t_micro *shell, char **argv, int argc, int nb_cmd)
{
	int	i = 1; 
	int	j = 1;
	int	y = 0;
	int	z = 0;
	
	while (i <= argc)
	{
		if (!argv[i] || !argv[j])
			break ;
		if ((y + 1 == nb_cmd && i + 1 == argc) || !strncmp(argv[i], ";", 2) || !strncmp(argv[i], "|", 2))
		{
			if (!strncmp(argv[j], ";", 2)|| !strncmp(argv[j], "|", 2))
			{
				i++;
				j = i;
				continue ;
			}
			if (y + 1 == nb_cmd && i == argc)
				shell[y].s = -1;
			else if (!strncmp(argv[i], ";", 2))
				shell[y].s = 0;
			else if  (!strncmp(argv[i], "|", 2))
				shell[y].s = 1;
			if (i + 1 == argc)
				i++;
			shell[y].tab = malloc(sizeof(char *) * (i - j + 1));
			if (!shell[y].tab)
				return (NULL);
			while (j < i)
			{
				shell[y].tab[z] = ft_strdup(argv[j]);
				if (!shell[y].tab[z])
					return (NULL);
				j++;
				z++;
			}
			shell[y].tab[z] = NULL;
			z = 0;
			j++;
			y++;
		}
		i++;
	}
	return (shell);
}

#include <stdio.h>
int	main(int argc, char **argv, char **env)
{
	int		nb_cmd;
	t_micro	*shell;

	nb_cmd = parsing_nb_cmd(argv, argc);
	if (nb_cmd == 0)
		return (1);
	shell = malloc(sizeof(t_micro) * nb_cmd);
	if (!shell)
	{
		ft_putstr_error("error: fatal", NULL);
		return (1);
	}
	if (!ft_init_struct_cmd(shell, argv, argc, nb_cmd))
	{
		ft_putstr_error("error: fatal", NULL);
		return (1);
	}

	int	i = 0;
	int	j = 0;
	while (i < nb_cmd)
	{
		while (shell[i].tab[j])
		{
			printf("%d-%d = %s\n", i, j, shell[i].tab[j]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
