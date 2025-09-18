/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 09:51:25 by clnicola          #+#    #+#             */
/*   Updated: 2025/06/11 10:25:19 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	len = ft_strlen(s);
	i = 0;
	str = (char *) malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i ++;
	}
	str[i] = '\0';
	return (str);
}

/*char test_toupper(unsigned int i, char c)
{
	(void)i;
	return ft_toupper(c);
}
#include <stdio.h>
int main()
{
	char	*test = "hello world";
	char	*test1;
	test1 = ft_strmapi(test, &test_toupper);
	printf("%s", test1);
}*/