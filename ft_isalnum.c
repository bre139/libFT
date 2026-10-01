/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:04:37 by breheg            #+#    #+#             */
/*   Updated: 2026/10/01 15:54:47 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'));
}

/*
DESCRIPTION
       These functions check whether c, which must have the value of an unsigned char or EOF, falls into a certain character class  ac‐
       cording to the specified locale.  The functions without the "_l" suffix perform the check based on the current locale.

       The functions with the "_l" suffix perform the check based on the locale specified by the locale object locale.  The behavior of
       these functions is undefined if locale is the special locale object LC_GLOBAL_LOCALE (see duplocale(3)) or is not a valid locale
       object handle.

       The  list  below explains the operation of the functions without the "_l" suffix; the functions with the "_l" suffix differ only
       in using the locale object locale instead of the current locale.

       isalnum()
              checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).

*/