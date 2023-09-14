/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 07:01:00 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/05 03:30:50 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	if (count == 0 || size == 0)
	{
		ptr = malloc(1);
		if (ptr == 0)
			return (0);
		*(ptr) = 0;
		return (ptr);
	}
	if ((count * size) / size != count)
		return (0);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		*(ptr + i) = 0;
		i++;
	}
	return ((void *) ptr);
}
