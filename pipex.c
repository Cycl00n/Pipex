/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:27:13 by clnicola          #+#    #+#             */
/*   Updated: 2025/09/20 14:47:09 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exec(char *cmd, char **env)
{
	char	*path;
	char	**args;

	if(cmd == NULL)
		exit(1);
	args = ft_split(cmd, ' ');
	if (!args[0])
	{
		free_tabs(args);
		exit(1);
	}
	path = get_cmd(env, args[0]);
	if ((execve(path, args, env)) == -1)
	{
		ft_putstr_fd("command not found: ", 2);
		ft_putstr_fd(args[0], 2);
		ft_putchar_fd('\n', 2);
		free(path);
		free_tabs(args);
		exit(127);
	}
	free_tabs(args);
}

int	open_file(char *name, int fd)
{
	int	id;

	if (fd == 0)
		id = open(name, O_RDONLY);
	if (fd == 1)
		id = open(name, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (id == -1)
	{
		ft_putstr_fd("error: cannot open file\n", 2);
		exit(1);
	}
	return (id);
}

void	child(char **av, int *p_fd, char **env)
{
	int	fd;

	fd = open_file(av[1], 0);
	dup2(fd, 0);
	dup2(p_fd[1], 1);
	close(p_fd[0]);
	exec(av[2], env);
}

void	parent(char **av, int *p_fd, char **env)
{
	int	fd;

	fd = open_file(av[4], 1);
	dup2(fd, 1);
	dup2(p_fd[0], 0);
	close(p_fd[1]);
	exec(av[3], env);
}

int	main(int ac, char **av, char **env)
{
	int		p_fd[2];
	pid_t	pid;

	if (ac != 5)
		exit(0);
	if (pipe(p_fd) == -1)
		exit(1);
	pid = fork();
	if (!pid)
		child(av, p_fd, env);
	else
	{
		parent(av, p_fd, env);
		waitpid(pid, NULL, 0);
	}
}
