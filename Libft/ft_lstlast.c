/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:28:41 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 12:12:52 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
/*#include <stdio.h>
int main()
{
	t_list lst1;
	t_list lst2;
	t_list lst3;

	lst1.content = "1";
	lst1.next = &lst2;
	lst2.content = "2";
	lst2.next = &lst3;
	lst3.content = "3";
	lst3.next = NULL;

	t_list *test = ft_lstlast(&lst1);
	printf("%s",(char *)test -> content);
}*/