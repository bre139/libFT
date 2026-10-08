/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:56:29 by breheg            #+#    #+#             */
/*   Updated: 2026/10/08 20:52:51 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	ft_del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*node;
// 	char	*content;
// 	content = malloc(6);

// 	if (!content)
// 		return (1);
// 	content[0] = 'H';
// 	content[1] = 'e';
// 	content[2] = 'l';
// 	content[3] = 'l';
// 	content[4] = 'o';
// 	content[5] = '\0';
// 	node = ft_lstnew(content);
// 	printf("before: %s\n", (char *)node->content);
// 	ft_lstdelone(node, ft_del);
// 	printf("node deleted\n");
// 	return (0);
// }

/*
description:
Takes a node as parameter and frees its content using the function 'del'.
Free the node itself but does NOT free the next node.
*/