/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breheg <breheg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:33:10 by breheg            #+#    #+#             */
/*   Updated: 2026/10/02 14:00:26 by breheg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l;
	char	c;

	l = n;
	if (l < 0)
	{
		write(fd, "-", 1);
		l = -l;
	}
	if (l >= 10)
		ft_putnbr_fd(l / 10, fd);
	c = (l % 10) + '0';
	write(fd, &c, 1);
}
int main(void)
{
	ft_putnbr_fd(473883, 1);
	return 0;
}

/*
Outputs the integer ’n’ to the specified file
descriptor.
*/