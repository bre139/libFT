/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:19:38 by breheg            #+#    #+#             */
/*   Updated: 2026/10/01 17:37:20 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	
	i = 0;
	cc = (char)c;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

/*
DESCRIPTION
       The  strchr()  function  returns  a pointer to the first occurrence of the character c in the
       string s.

       The strrchr() function returns a pointer to the last occurrence of the  character  c  in  the
       string s.

       The strchrnul() function is like strchr() except that if c is not found in s, then it returns
       a pointer to the null byte at the end of s, rather than NULL.

       Here "character" means "byte"; these functions do not work with wide or multibyte characters.

RETURN VALUE
       The strchr() and strrchr() functions return a pointer to the matched character or NULL if the
       character  is not found.  The terminating null byte is considered part of the string, so that
       if c is specified as '\0', these functions return a pointer to the terminator.

       The strchrnul() function returns a pointer to the matched character, or a pointer to the null
       byte at the end of s (i.e., s+strlen(s)) if the character is not found.
*/