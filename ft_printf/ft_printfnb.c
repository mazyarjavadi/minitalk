/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfnb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:53:33 by mjavadi           #+#    #+#             */
/*   Updated: 2023/03/23 02:54:14 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_nblen(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_upnb(unsigned int nb)
{
	int		len;
	char	*n;

	len = ft_nblen(nb);
	n = malloc(sizeof(char) * (len + 1));
	if (!n)
		return (0);
	n[len] = '\0';
	while (nb)
	{
		n[len - 1] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (n);
}

int	ft_punsignednb(unsigned int nb)
{
	int		len;
	char	*num;

	len = 0;
	if (nb == 0)
		len += write(1, "0", 1);
	else
	{
		num = ft_upnb(nb);
		len += ft_pstr(num);
		free (num);
	}
	return (len);
}

int	ft_pnb(int nb)
{
	int		len;
	char	*num;

	len = 0;
	if (nb == 0)
		return (write (1, "0", 1));
	num = ft_itoa(nb);
	len = ft_pstr(num);
	free(num);
	return (len);
}
