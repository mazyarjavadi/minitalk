/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 08:53:26 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/01 08:53:51 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*sptr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	sptr = (char *) ft_calloc(ft_strlen(s) + 1, 1);
	if (!sptr)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		sptr[i] = f(i, s[i]);
		i++;
	}
	sptr[i] = 0;
	return (sptr);
}
