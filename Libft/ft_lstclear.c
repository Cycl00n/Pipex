/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:28:22 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 14:51:08 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		del((*lst)-> content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*#include <stdio.h>
#include <stdlib.h>
void dummy_del(void *content)
{
	(void)content;
}
int main()
{
	t_list *lst1 = malloc(sizeof(t_list));
	t_list *lst2 = malloc(sizeof(t_list));
	t_list *lst3 = malloc(sizeof(t_list));
	t_list *lst4 = malloc(sizeof(t_list));
	t_list *head = lst1;

	lst1 -> content = "1";
	lst1 -> next = lst2;
	lst2 -> content = "2";
	lst2 -> next = lst3;
	lst3 -> content = "3";
	lst3 -> next = lst4;
	lst4 -> content = "4";
	lst4 -> next = NULL;

	printf("Size before %d\n", ft_lstsize(head));
	ft_lstclear(&head, dummy_del);
	printf("Size after %d", ft_lstsize(head));
}*/