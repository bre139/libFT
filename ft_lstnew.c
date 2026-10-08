/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:53:16 by breheg            #+#    #+#             */
/*   Updated: 2026/10/08 20:53:38 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew("Hello");
// 	printf("content: %s\n", (char *)node->content);
// 	printf("next: %p\n", (void *)node->next);
// 	return (0);
// }
// exspected output:
// content: Hello
// next: 0x0v

/*
Return Value
A pointer to the new node.

Allocates memory (using malloc(3)) and returns a new node.
The 'content' member variable is initialized with the given parameter 'content'.
The variable 'next' is initialized to NULL.
*/