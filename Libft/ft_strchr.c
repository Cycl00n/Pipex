/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:39:56 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 11:36:21 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
		i ++;
	}
	return ((char *)&s[i]);
}

/*#include <stdio.h>
int main()
{
	const char *my_string = "hello";
	char *result;

	result = ft_strchr(my_string, 'l');
	if (result)
		printf("Found 'l' at: %s\n", result);
	return 0;
}*/