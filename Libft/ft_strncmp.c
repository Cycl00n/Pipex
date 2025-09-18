/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:40:22 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/21 11:01:39 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[] = "word";
	char s2[] = "Word";
	int n = 2;

	printf("Original: %d\n", strncmp(s1, s2, n));
	printf("Mine: %d\n", ft_strncmp(s1, s2, n));
}*/