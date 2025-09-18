/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:39:21 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/11 16:57:10 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*#include <stdio.h>

int main()
{
    printf("--- ft_isprint Test ---\n");
    printf("Is ' ' print? %s\n", ft_isprint(' ') ? "Yes" : "No");
    printf("Is '~' print? %s\n", ft_isprint('~') ? "Yes" : "No");
    printf("Is '\\n' print? %s\n", ft_isprint('\n') ? "Yes" : "No");
    return (0);
}*/