/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarhdad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 02:52:23 by ybarhdad          #+#    #+#             */
/*   Updated: 2019/10/15 22:39:43 by ybarhdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	long	n;
	int		sign;
	char	c;

	sign = 1;
	n = nbr;
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
	{
		c = 48 + n;
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
		c = 48 + (n % 10);
		write(fd, &c, 1);
	}
}