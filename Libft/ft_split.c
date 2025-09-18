/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:39:52 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 11:34:46 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i ++;
		if (s[i])
			words ++;
		while (s[i] && s[i] != c)
			i ++;
	}
	return (words);
}

static void	ft_allocate(char **arr, char const *s, char c)
{
	char		**arr1;
	char const	*str;

	arr1 = arr;
	while (*s)
	{
		while (*s == c)
			++s;
		str = s;
		while (*str && *str != c)
			++str;
		if (str > s)
		{
			*arr1 = ft_substr(s, 0, str - s);
			++arr1;
		}
		s = str;
	}
	*arr1 = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		size;

	if (!s)
		return (NULL);
	size = ft_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (size + 1));
	if (!arr)
		return (NULL);
	ft_allocate(arr, s, c);
	return (arr);
}

/*#include <stdio.h>
int	main()
{
	char const *test_string1 = "punaise,ils parlent fort,les,lifeguards,,,";
	char delimiter1 = ',';
	char **result1;
	int i = 0;
	result1 = ft_split(test_string1, delimiter1);
	while (result1[i] != NULL)
	{
		printf("Word %d: %s\n", i, result1[i]);
		i++;
	}
}*/