/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:51:31 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 14:30:34 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}
/*#include <stdio.h>
void dummy_del(void *content)
{
	(void)content;
}
int main()
{
	t_list *str1 = malloc(sizeof(t_list));
	str1->content = "Test";
	printf("Before: %s\n", (char *)str1->content);
	ft_lstdelone(str1, dummy_del);
	printf("Node deleted.\n");
}*/