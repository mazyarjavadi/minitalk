/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:29:29 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/01 08:29:30 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdest;

	pdest = (unsigned char *) dest;
	psrc = (unsigned char *) src;
	if (dest > src)
	{
		while (n > 0)
		{
			pdest[n - 1] = psrc[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(pdest, psrc, n);
	return (pdest);
}
