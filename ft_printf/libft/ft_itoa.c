/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 07:12:31 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/01 07:19:20 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(long n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	fill(char *str, int *i, long n)
{
	if (n >= 10)
	{
		fill(str, i, n / 10);
		fill(str, i, n % 10);
	}
	else
	{
		str[*i] = n + '0';
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	ln;

	ln = n;
	str = (char *) ft_calloc(size(ln) + 1, 1);
	if (!str)
		return (NULL);
	i = 0;
	if (ln < 0)
	{
		str[i++] = '-';
		ln = -ln;
	}
	fill(str, &i, ln);
	str[i] = 0;
	return (str);
}
