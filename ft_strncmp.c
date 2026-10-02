/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:46:53 by breheg            #+#    #+#             */
/*   Updated: 2026/10/02 14:15:07 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
DESCRIPTION
       The  strcmp()  function compares the two strings s1 and s2.  The locale is not taken into ac‐
       count (for a locale-aware comparison, see strcoll(3)).  The comparison is done using unsigned
       characters.

       strcmp() returns an integer indicating the result of the comparison, as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.

       The  strncmp() function is similar, except it compares only the first (at most) n bytes of s1
       and s2.

RETURN VALUE
       The strcmp() and strncmp() functions return an integer less than, equal to, or  greater  than
       zero  if s1 (or the first n bytes thereof) is found, respectively, to be less than, to match,
       or be greater than s2.
*/

/*
int	main(void)
{
	char s1[] = "Hi";
	char s2[] = "Hello";
	int result = ft_strncmp(s1, s2, 5);
	printf("%d", result);
}
*/	