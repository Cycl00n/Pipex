/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:39:41 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 14:30:01 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*strd;
	const char		*strs;
	size_t			i;

	strd = (char *)dest;
	strs = (const char *)src;
	if (strd == strs || n == 0)
		return (dest);
	if (strd < strs)
	{
		i = 0;
		while (i < n)
		{
			*strd++ = *strs++;
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			strd[i] = strs[i];
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "Hello world";
	char str1[20];
	ft_memmove(str1, str, strlen(str) + 1);
	printf("Src=\"%s\", Dest=\"%s\"\n", str, str1);
	return (0);
}*/