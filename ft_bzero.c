/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 16:46:02 by breheg            #+#    #+#             */
/*   Updated: 2026/10/01 16:37:22 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*
DESCRIPTION
       The  bzero()  function  erases  the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros
       (bytes containing '\0') to that area.

       The explicit_bzero() function performs the same task as bzero().  It differs from bzero() in that it  guarantees  that  compiler
       optimizations will not remove the erase operation if the compiler deduces that the operation is "unnecessary".

RETURN VALUE
       None.
*/