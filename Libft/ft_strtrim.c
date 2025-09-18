/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:40:38 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 11:59:13 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_strdup(""));
	end --;
	start = 0;
	while (ft_strchr(set, s1[start]) && start <= end)
		start ++;
	while (end > start && ft_strchr(set, s1[end]))
		end --;
	str = (char *) malloc((end - start + 2) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
/*#include <stdio.h>
int main()
{
	char str[] = "iaiaiaooooiaiaHello wordliaiaia";
	printf("str %s\n trimmed: %s",str,ft_strtrim(str, "ia"));
}*/