/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:27:20 by clnicola          #+#    #+#             */
/*   Updated: 2025/09/20 10:05:22 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "Libft/libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/wait.h>

void	parent(char **av, int *p_fd, char **env);
void	child(char **av, int *p_fd, char **env);
int		open_file(char *name, int fd);
void	exec(char *cmd, char **env);
char	*get_path(char **env);
char	*get_cmd(char **env, char *cmd);
void	free_tabs(char **args);

#endif
