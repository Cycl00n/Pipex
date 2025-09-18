/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:27:13 by clnicola          #+#    #+#             */
/*   Updated: 2025/09/18 14:16:55 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exec(char *cmd, char **env)
{
	char *path;
	char **args;

	args = ft_split(cmd, ' ');
	path = get_cmd(env, args[0]);
	if(!path)
	{
		ft_printf("command not found: %s\n",args[0]);
		exit(0);
	}
	execve(path, args, env);
}

int open_file(char *name, int fd)
{
	int id;

	if(fd == 0)
		id = open(name, O_RDONLY);
	if(fd == 1)
		id = open(name, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	return(id);
}

void child(char **av, int *p_fd, char **env)
{
	int fd;

	fd = open_file(av[2], 0);
	dup2(fd, 0);
	dup2(p_fd[1], 1);
	close(p_fd[0]);
	exec(av[2], env);
}

void parent(char **av, int *p_fd, char **env)
{
	int	fd;
	
	fd = open_file(av[4], 1);
	dup2(fd, 1);
	dup2(p_fd[0], 0);
	close(p_fd[1]);
	exec(av[3], env);
}

int main(int ac, char **av, char **env)
{
	int p_fd[2];
	pid_t	pid;

	if(ac != 5)
		return(0);
	if(pipe(p_fd) == -1)
		return(0);
	pid = fork();
	if(!pid)
		child(av, p_fd, env);
	parent(av, p_fd, env);
}
