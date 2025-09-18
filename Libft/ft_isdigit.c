/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:39:16 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/10 10:39:18 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*#include <stdio.h>

int main()
{
    printf("--- ft_isdigit Test ---\n");
    printf("Is '7' digit? %s\n", ft_isdigit('7') ? "Yes" : "No");
    printf("Is 'X' digit? %s\n", ft_isdigit('X') ? "Yes" : "No");
    printf("Is '$' digit? %s\n", ft_isdigit('$') ? "Yes" : "No");
    return (0);
}*/