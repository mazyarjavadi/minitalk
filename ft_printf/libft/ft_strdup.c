/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:41:22 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/01 09:42:40 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;

	copy = (char *)malloc(ft_strlen(s1) + 1 * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s1, ft_strlen(s1) + 1);
	return (copy);
}
