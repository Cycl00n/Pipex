/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:55:52 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 15:38:54 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !(*f))
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst -> next;
	}
}
/*void	ft_toupperdup(void *c)
{
	char *str = (char *)c;
	int i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}
#include <stdio.h>
#include <string.h>
int main()
{
	t_list lst1, lst2, lst3;
	t_list *head = &lst1;

	lst1.content = strdup("hello");
	lst1.next = &lst2;
	lst2.content = strdup("world");
	lst2.next = &lst3;
	lst3.content = strdup("test");
	lst3.next = NULL;
	ft_lstiter(head,ft_toupperdup);
	printf("Result: %s\n",(char*)lst1.content);
	printf("Result: %s\n",(char*)lst2.content);
	printf("Result: %s\n",(char*)lst3.content);
}*/