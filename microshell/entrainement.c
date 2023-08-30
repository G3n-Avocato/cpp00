
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_micro {
	char **tab;
	int	out;
}t_micro;

//FCT BASIC//
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
		write(2, &str[i], 1);
		i++;
	}
	write(2, "\n", 1);
	return (0);
}

char *ft_strdup(char *str)
{
	char *new = NULL;
	int len = 0;
	int	i = 0;

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
	int	i = 0;

	while (i < nb_cmd)
	{
		shell[i].out = -1;
		i++;
	}
}

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
//PARSING//

int	parsing_nb_cmd(char **argv, int argc)
{
	int	i = 1;
	int nb_cmd = 0;

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

char **realloc_tab(char **tmp, char *str)
{
	int	i = 0;
	char **new;

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
	new[i] = str;
	new[++i] = NULL;
	return (new);
}

char **ft_init_tab(char **tmp)
{
	int	i = 0;
	char **new;

	while (tmp && tmp[i])
		i++;
	new = malloc(sizeof(char *) * ())


}

void	*ft_init_cmd(t_micro *shell, char **argv, int argc)
{
	char **tmp = NULL;
	int	i = 1;
	int	y = 0;

	while (i < argc)
	{
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

t_micro *parsing(char **argv, int argc)
{
	int	nb_cmd = parsing_nb_cmd(argv, argc);
	t_micro	*shell;

	if (nb_cmd == 0)
		return (NULL);
	shell = malloc(sizeof(t_micro) * nb_cmd);
	if (!shell)
	{
		ft_putstr_error("error: fatal", NULL);
		return (NULL);
	}
	ft_init_struct(shell, nb_cmd);
	if (!ft_init_cmd(shell, argv, argc))
	{
		ft_putstr_error("error: fatal", NULL);
		return (NULL);
	}
	return (shell);
}

int main(int argc, char **argv, char **env)
{
	t_micro	*shell = parsing(argv, argc);

	if (!shell)
		return (1);
	int	nb_cmd = parsing_nb_cmd(argv, argc);
	ft_start_exec(shell, nb_cmd, env);
	ft_free(shell, nb_cmd);
	return (0);
}
