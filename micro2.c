/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:46:52 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/24 21:23:52 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int	ft_putstr_fd(char *str, char *str2, int fd);

int	ft_no_pipe(char **tab, int fd_in, char **env)
{
	if (fork() == 0)
	{
		dup2(fd_in, 0);
		close(fd_in);
		if (execve(tab[0], tab, env) == -1)
		{
			ft_putstr_fd("error: cannot execute ", tab[0], 2);
			return (-1);
		}
	}
	else
	{
		close(fd_in);
		while (waitpid(-1, NULL, 0) != -1)
			;
		fd_in = dup(0);
	}
	return (fd_in);
}

int	ft_pipe(char **tab, int fd_in, char **env)
{
	int	fd[2];

	if (pipe(fd) == -1)
	{
		ft_putstr_fd("error: fatal", NULL, 2);
		return (-1);
	}
	if (fork() == 0)
	{
		dup2(fd[1], 1);
		close(fd[0]);
		close(fd[1]);
		dup2(fd_in, 0);
		close(fd_in);
		if (execve(tab[0], tab, env) == -1)
		{
			ft_putstr_fd("error: cannot execute ", tab[0], 2);
			return (-1);
		}
	}
	else
	{
		close(fd[1]);
		close(fd_in);
		fd_in = fd[0];
	}
	return (fd_in);
}
