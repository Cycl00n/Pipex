/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:06:18 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/01 12:19:55 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i ++;
	}
	return (i);
}
/*#include <stdio.h>
int main()
{
	t_list lst;
	t_list lst1;
	t_list lst2;
	lst.next = &lst1;
	lst1.next = &lst2;
	lst2.next = NULL;
	printf("Lenght: %d\n",ft_lstsize(&lst));
}*/