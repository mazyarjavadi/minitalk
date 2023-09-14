/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinfhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:48:30 by mjavadi           #+#    #+#             */
/*   Updated: 2023/03/23 02:48:52 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_lenh(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

void	ft_ptrh(unsigned int nb, const char format)
{
	if (nb >= 16)
	{
		ft_ptrh(nb / 16, format);
		ft_ptrh(nb % 16, format);
	}
	else
	{
		if (nb <= 9)
			ft_putchar_fd((nb + 48), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((nb - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((nb - 10 + 'A'), 1);
		}
	}
}

int	ft_phex(unsigned int nb, const char format)
{
	if (nb == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	ft_ptrh(nb, format);
	return (ft_lenh(nb));
}
