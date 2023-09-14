/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:43:25 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/05 04:51:07 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(src);
	if (!size)
		return (slen);
	dlen = ft_strlen(dest);
	if (size <= dlen)
		return (slen + size);
	while (*dest)
		dest++;
	i = 0;
	while (src[i] && (i + dlen) < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (slen + dlen);
}
