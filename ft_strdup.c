/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:04:59 by breheg            #+#    #+#             */
/*   Updated: 2026/10/01 19:13:20 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (char)s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
DESCRIPTION
       The strdup() function returns a pointer to a new string which is a duplicate of the string s.
       Memory for the new string is obtained with malloc(3), and can be freed with free(3).

       The strndup() function is similar, but copies at most n bytes.  If s is longer than n, only n
       bytes are copied, and a terminating null byte ('\0') is added.

       strdupa()  and  strndupa()  are  similar, but use alloca(3) to allocate the buffer.  They are
       available only when using the GNU GCC suite, and suffer from the same  limitations  described
       in alloca(3).

RETURN VALUE
       On  success,  the  strdup()  function returns a pointer to the duplicated string.  It returns
       NULL if insufficient memory was available, with errno set to indicate the cause of the error.
*/