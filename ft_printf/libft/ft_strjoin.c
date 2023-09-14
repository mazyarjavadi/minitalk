/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:42:54 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/05 04:57:58 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!join)
		return (NULL);
	i = 0;
	{
		while (*s1 != '\0')
		{
			join[i] = *s1;
			i++;
			s1++;
		}
		while (*s2 != '\0')
		{
			join[i] = *s2;
			i++;
			s2++;
		}
		join[i] = '\0';
	}
	return (join);
}
