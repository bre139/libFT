/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:19:29 by breheg            #+#    #+#             */
/*   Updated: 2026/10/01 17:18:15 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
NOTES
       Failure to observe the requirement that the memory areas do not overlap has been  the  source  of  significant
       bugs.   (POSIX  and the C standards are explicit that employing memcpy() with overlapping areas produces unde‐
       fined behavior.)  Most notably, in glibc 2.13 a performance optimization of memcpy() on  some  platforms  (in‐
       cluding x86-64) included changing the order in which bytes were copied from src to dest.

       This change revealed breakages in a number of applications that performed copying with overlapping areas.  Un‐
       der the previous implementation, the order in which the bytes were copied had  fortuitously  hidden  the  bug,
       which  was  revealed when the copying order was reversed.  In glibc 2.14, a versioned symbol was added so that
       old binaries (i.e., those linked against glibc versions earlier than 2.14) employed a memcpy()  implementation
       that  safely  handles  the  overlapping buffers case (by providing an "older" memcpy() implementation that was
       aliased to memmove(3)).

	   RETURN VALUE
       The memcpy() function returns a pointer to dest.
*/