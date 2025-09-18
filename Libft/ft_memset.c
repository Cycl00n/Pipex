/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:39:47 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 12:47:49 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
int main()
{
	char str[20] = "Hello World";

	printf("Before memset: \"%s\"\n", str);
	ft_memset(str, 'X', 5);
	printf("After memset (X, 5): \"%s\"\n", str);

}*/