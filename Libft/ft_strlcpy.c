/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:40:14 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/30 14:54:39 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t sz)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (sz == 0)
		return (len);
	while (src[i] && i < sz - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*#include <stdio.h>
int main()
{
	char dest_[5];
	char src_[5] = {"Hello"};

	char* dest = dest_;
	char* src = src_;
	ft_strlcpy(dest,src, 2);

	printf("dest: %s", dest);
	return(0);
}*/