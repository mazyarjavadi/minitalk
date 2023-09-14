/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:58:08 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/01 09:19:06 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *) s;
	i = ft_strlen(s);
	while (str[i] != (unsigned char) c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return (str + i);
}
