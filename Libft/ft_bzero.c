/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:38:40 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 12:48:19 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main()
{
    char buffer[20];

    printf("--- ft_bzero Test ---\n");

    strcpy(buffer, "Hello World!");
    printf("Before bzero: \"%s\"\n", buffer);
    ft_bzero(buffer + 6, 5);
    printf("After bzero (part): \"%.20s\"\n", buffer);

    strcpy(buffer, "Another test string");
    printf("Before bzero: \"%s\"\n", buffer);
    ft_bzero(buffer, sizeof(buffer));
    printf("After bzero (full): \"%s\" (empty string if successful)\n", buffer);

    return (0);
}*/