/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 14:53:17 by breheg            #+#    #+#             */
/*   Updated: 2026/10/08 22:29:15 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
DESCRIPTION
isalpha()
checks for an alphabetic character; in the standard "C"
locale, it is equivalent to (isupper(c) || islower(c)).  In  some
locales,  there  may  be additional characters for which
isalpha() is true—letters which are neither uppercase nor lower‐
case.
*/