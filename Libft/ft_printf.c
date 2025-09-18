/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:38:24 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/21 11:00:54 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	arg;

	count = 0;
	i = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i +1])
		{
			count += select_output(format[i +1], arg);
			i += 2;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
			count ++;
		}
	}
	va_end(arg);
	return (count);
}
/*#include <stdio.h>

int main()
{
	void	*ptr;
	char	test = 'A';
	char	test2 = 'b';
	int		test3 = -1;
	char *	test4 = "Hello World";
	ft_printf("Test: %c and %c with some %d\n%s %%", test, test2, test3, test4);
	ptr = NULL;
	ft_printf("%p\n", ptr);
	printf("%p\n", ptr);
	return 0;
}*/
