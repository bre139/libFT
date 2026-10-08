/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:56:00 by breheg            #+#    #+#             */
/*   Updated: 2026/10/08 19:09:19 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstlast(t_list *lst)
// {
// 	if (!lst)
// 		return (NULL);
// 	while (lst != NULL && lst->next != NULL)
// 		lst = lst->next;
// 	return (lst);
// }

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

// int	main(void)
// {
// 	t_list	a;
// 	t_list	b;
// 	t_list	*lst;

// 	a.content = "A";
// 	a.next = NULL;
// 	b.content = "B";
// 	b.next = NULL;
// 	lst = &a;
// 	ft_lstadd_back(&lst, &b);
// 	printf("first: %s\n", (char *)lst->content);
// 	printf("second: %s\n", (char *)lst->next->content);
// 	return (0);
// }

/*
description:
Adds the node 'new' at the end of the list.
*/