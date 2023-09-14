/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:31:22 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/01 08:31:25 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*sptr;
	size_t			i;

	i = 0;
	sptr = (unsigned char *) s;
	while (i < n)
	{
		sptr[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
