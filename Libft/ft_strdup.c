/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:40:00 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/11 10:24:14 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < ft_strlen(s))
	{
		str[i] = s[i];
		i ++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int main()
{
	char *str = ft_strdup("hello");
	printf("%s", str);
}*/