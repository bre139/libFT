/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:50:05 by breheg            #+#    #+#             */
/*   Updated: 2026/10/08 20:53:22 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	ft_print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }
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
// 	ft_lstiter(&a, ft_print_content);
// 	return (0);
// }

/*
DESCRIPTION:
Iterates through the list 'Ist' and.
applies the function 'f' to the content of each
*/