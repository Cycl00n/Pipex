/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:39:36 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 12:48:34 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*strs;
	char	*strd;
	size_t	i;

	strs = (char *)src;
	strd = (char *)dest;
	i = 0;
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char str_dest[20];
	char str_src[] = "Hello World!";
	ft_memcpy(str_dest, str_src, strlen(str_src) + 1);
	printf("Source= %s \n Dest=%s\n", str_src, str_dest);
}*/