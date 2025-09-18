/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_output.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:30:50 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/21 11:02:16 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	select_output(const char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 'd')
		return (ft_putnbr(va_arg(arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == '%')
		return (moduloprint());
	else if (c == 'p')
		return (put_hexa_void(va_arg(arg, void *)));
	else if (c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(arg, unsigned int)));
	else if (c == 'x')
		return (put_hexa(va_arg(arg, unsigned int)));
	else if (c == 'X')
		return (put_hexa_cap(va_arg(arg, unsigned int)));
	return (0);
}
