/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 08:43:07 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/30 14:52:16 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(int n)
{
	size_t	i;

	i = (n <= 0);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	size;
	long	nb;

	size = ft_size(n);
	nb = n;
	s = malloc(size + 1);
	if (!s)
		return (NULL);
	s[size--] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		s[0] = '-';
	}
	if (nb == 0)
		s[0] = '0';
	while (nb)
	{
		s[size--] = nb % 10 + '0';
		nb /= 10;
	}
	return (s);
}

/*#include <stdio.h>
int main()
{
	printf("numbers of digits: %zu\n", ft_size(0));
	printf("str of number: %s", ft_itoa(0));
}*/