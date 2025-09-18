/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:31:58 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/21 11:01:13 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int nb)
{
	long	n;
	int		count;

	n = (long)nb;
	count = 0;
	if (n == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		count += ft_putchar(n + '0');
		return (count);
	}
	else
	{
		count += ft_putnbr((n / 10));
		count += ft_putchar((n % 10) + '0');
		return (count);
	}
}
