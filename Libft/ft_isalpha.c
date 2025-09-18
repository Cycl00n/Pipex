/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:39:07 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/10 15:19:53 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

/*#include <stdio.h>

int main()
{
    printf("--- ft_isalpha Test ---\n");
    printf("Is 'A' alpha? %s\n", ft_isalpha('A') ? "Yes" : "No");
    printf("Is '5' alpha? %s\n", ft_isalpha('5') ? "Yes" : "No");
    printf("Is 'z' alpha? %s\n", ft_isalpha('z') ? "Yes" : "No");
    return (0);
}*/