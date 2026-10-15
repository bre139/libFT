/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:55:37 by breheg            #+#    #+#             */
/*   Updated: 2026/10/15 00:13:41 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned char	*str;
// 	size_t			i;

// 	i = 0;
// 	str = (unsigned char *)s;
// 	while (i < n)
// 	{
// 		str[i] = '\0';
// 		i++;
// 	}
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = (void *)malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

/*
DESCRIPTION:

The calloc() function allocates memory for an
array of nmemb elements of size bytes each  and
returns  a  pointer to the allocated memory.
The memory is set to zero.  If nmemb or size is
0, then calloc() returns either NULL, or a
unique pointer value that can  later  be  success‐
fully  passed  to  free().   If  the multiplication
of nmemb and size would result in integer
overflow, then calloc() returns an error.
By contrast, an integer overflow would not be
detected  in the following call to malloc()
with the result that an incorrectly sized block of
memory would be allocated:
*/