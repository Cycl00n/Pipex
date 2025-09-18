/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:38:52 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 14:30:17 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
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

	printf("Last before: %s\n", (char *)ft_lstlast(first)->content);
	ft_lstadd_back(&first, &new);
	printf("Last after: %s\n", (char *)ft_lstlast(first)->content);
	return 0;
}*/