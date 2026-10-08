/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:51:28 by breheg            #+#    #+#             */
/*   Updated: 2026/10/08 20:53:43 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/*
exspected output:
three nodes: 3
one node: 1
empty list: 0
*/
// int	main(void)
// {
// 	t_list	a;
// 	t_list	b;
// 	t_list	c;

// 	a.content = "A";
// 	a.next = &b;
// 	b.content = "B";
// 	b.next = &c;
// 	c.content = "C";
// 	c.next = NULL;
// 	printf("three nodes: %d\n", ft_lstsize(&a));
// 	printf("one node: %d\n", ft_lstsize(&c));
// 	printf("empty list: %d\n", ft_lstsize(NULL));
// 	return (0);
// }

/*
Return Value
The length of the

Counts the number of nodes in the list.
*/