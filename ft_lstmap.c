/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 18:25:16 by breheg            #+#    #+#             */
/*   Updated: 2026/10/08 20:46:40 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;
	void	*content;

	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}

// void	*ft_copy_content(void *content)
// {
// 	char	*copy;
// 	char	*str;
// 	int		i;

// 	str = (char *)content;
// 	copy = malloc(2);
// 	if (!copy)
// 		return (NULL);
// 	i = 0;
// 	copy[i] = str[i];
// 	copy[i + 1] = '\0';
// 	return (copy);
// }

// void	ft_del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	a;
// 	t_list	b;
// 	t_list	*new_lst;

// 	a.content = "A";
// 	a.next = &b;
// 	b.content = "B";
// 	b.next = NULL;
// 	new_lst = ft_lstmap(&a, ft_copy_content, ft_del);
// 	printf("first: %s\n", (char *)new_lst->content);
// 	printf("second: %s\n", (char *)new_lst->next->content);
// 	ft_lstclear(&new_lst, ft_del);
// 	return (0);
// }

/*
DESCRIPTION:
Iterates through the list 'ist', applies the function 'f'
to each node's content, and creates a new_lst list resulting
of the successive applications of the function 'f'. The 'del'
function is used to delete the content of a node if needed.
*/