/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:30:36 by clnicola          #+#    #+#             */
/*   Updated: 2025/09/18 14:06:57 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char *get_path(char **env)
{
	int i = 0;

	while(env[i])
	{
		if(ft_strncmp(env[i], "PATH=", 5) == 0)
			return(env[i] + 5);
		i++;
	}
	return(NULL);
}

char	*get_cmd(char **env, char *cmd)
{
	int i;
	char **path;
	char *temp;
	char *full_path;

	i = 0;
	path = ft_split(get_path(env), ':');
	while(path[i])
	{
		temp = ft_strjoin(path[i],"/");
		full_path = ft_strjoin(temp, cmd);
		if(access(full_path, X_OK) == 0)
			return(full_path);
		free(full_path);
		i++;
	}
	return(NULL);
}
