/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:25:39 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/01 08:27:46 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sptr;
	size_t			i;

	sptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (sptr[i] == (unsigned char) c)
			return (sptr + i);
		i++;
	}
	return (NULL);
}
