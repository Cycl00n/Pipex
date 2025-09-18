/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:27:13 by clnicola          #+#    #+#             */
/*   Updated: 2025/09/18 13:02:05 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exec(char *cmd, char **env)
{
	execve(cmd)
}

void child(char **av, int *p_fd, char **env)
{
	int fd;

	fd = open_file(av[2], 0);
	dup2(fd, 0);
	dup2(p_fd[1], 1);
	close(p_fd[0]);
	//exec();
}

void parent(char **av, int *p_fd, char **env)
{
	int	fd;
	
	fd = open_file(av[4], 1);
	dup2(fd, 1);
	dup2(p_fd[0], 0);
	close(p_fd[1]);
	//exec();
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
