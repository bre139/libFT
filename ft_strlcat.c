/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:08:28 by breheg            #+#    #+#             */
/*   Updated: 2026/10/14 23:59:05 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	int  i;
//
// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	to_cat;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + src_len);
	to_cat = size - dst_len -1;
	while (src[i] && i < to_cat)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int  main(void)
// {
//      char buf[16] = "hello";
//      char src[16] = "world";
//      size_t ret = ft_strlcat(buf, src , 2);
//
//      printf("dst: \"%s\"\n", buf);
//      printf("src: %s\n", src);
//      printf("results: %zu\n", ret);
// }