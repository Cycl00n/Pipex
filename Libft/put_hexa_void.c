/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hexa_void.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 17:12:42 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/21 11:02:47 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	put_hex_recursive(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += put_hex_recursive(n / 16);
	count += ft_putchar("0123456789abcdef"[n % 16]);
	return (count);
}

int	put_hexa_void(void *add)
{
	int				count;
	unsigned long	addr;

	addr = (unsigned long)add;
	count = 0;
	if (!add)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	count += ft_putstr("0x");
	if (addr == 0)
		count += ft_putchar('0');
	else
		count += put_hex_recursive(addr);
	return (count);
}
