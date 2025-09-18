/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:05:20 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/21 11:02:41 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	put_hexa(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n >= 16)
		count += put_hexa(n / 16);
	count += ft_putchar("0123456789abcdef"[n % 16]);
	return (count);
}
