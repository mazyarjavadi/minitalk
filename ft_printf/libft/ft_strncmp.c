/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:43:06 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/01 10:44:13 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1ptr;
	unsigned char	*s2ptr;

	if (n == 0)
		return (0);
	s1ptr = (unsigned char *) s1;
	s2ptr = (unsigned char *) s2;
	while (*s1ptr && *s2ptr && *s1ptr == *s2ptr && n > 1)
	{
		s1ptr++;
		s2ptr++;
		n--;
	}
	return (*s1ptr - *s2ptr);
}
