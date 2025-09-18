/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:40:07 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 11:40:15 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = ft_strlen(dst);
	i = 0;
	k = ft_strlen(src);
	if (sz == 0)
		return (k);
	if (sz <= j)
		return (sz + k);
	while (src[i] && ((i + j) < (sz - 1)))
	{
		dst[j + i] = src[i];
		i ++;
	}
	dst[j + i] = '\0';
	return (k + j);
}

/*#include <stdio.h>
int	main(void)
{
	char	dest[12] = "1337 42";
	char	src[12] = "Born to code";
	int	size = 20;

	printf("Dest Before: %s\n", dest);
	printf("return %zu\n", ft_strlcat(dest, src, size));
	printf("Dest after: %s\n", dest);
}*/