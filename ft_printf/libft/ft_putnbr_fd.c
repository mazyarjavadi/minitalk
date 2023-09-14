/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:33:09 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/01 08:33:43 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	pos(long nbr, int fd)
{
	if (nbr > 0)
	{
		pos(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr == 0)
		ft_putchar_fd(nbr + '0', fd);
	else
		pos(nbr, fd);
}
