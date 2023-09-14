/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:57:33 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/05 02:12:55 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	i = ft_strlen(to_find);
	if (i == 0)
		return ((char *) str);
	if (!len)
		return (0);
	if (*str && i <= len)
	{
		while (*str && len >= i)
		{
			if (ft_strncmp(str, to_find, i) == 0)
				return ((char *)str);
			str++;
			len--;
		}
	}
	return (0);
}
