/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:11:44 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 13:03:55 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*#include<stdio.h>
int main()
{
	t_list lst1;
	t_list lst2;
	t_list lst3;
	t_list new;
	t_list *first = &lst1;

	lst1.content = "1";
	lst1.next = &lst2;
	lst2.content = "2";
	lst2.next = &lst3;
	lst3.content = "3";
	lst3.next = NULL;
	new.content = "4";
	new.next = NULL;

	printf("First before: %s\n",(char *)first->content);
	ft_lstadd_front(&first, &new);
	printf("First after: %s\n",(char *)first->content);
	return 0;
}*/