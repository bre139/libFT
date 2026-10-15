/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:37:53 by breheg            #+#    #+#             */
/*   Updated: 2026/10/08 23:33:00 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*str;

	i = 0;
	cc = (char)c;
	str = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			str = (char *)&s[i];
		i++;
	}
	if (s[i] == cc)
		str = (char *)&s[i];
	return (str);
}

/*
DESCRIPTION
The  strchr() function returns a pointer
to the first occurrence of the character c in the
string s.

The strrchr() function returns a pointer
to the last occurrence of the  character  c  in  the
string s.

RETURN VALUE
The strchr() and strrchr() functions return a pointer
to the matched character or NULL if the
character  is not found.  The terminating null byte
is considered part of the string, so that
if c is specified as '\0', these functions return a
pointer to the terminator.
*/