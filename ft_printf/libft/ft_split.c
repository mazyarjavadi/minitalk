/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 02:02:47 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/05 02:03:01 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_sep(char c, char sep)
{
	return (c == sep);
}

static int	count_words(char const *s, char c)
{
	int	size;

	size = 0;
	while (*s)
	{
		while (*s && is_sep(*s, c))
			s++;
		if (*s && !is_sep(*s, c))
		{
			size++;
			while (*s && !is_sep(*s, c))
				s++;
		}
	}
	return (size);
}

static char	*str_dup(char const *s, char c)
{
	int		i;
	char	*array;

	i = 0;
	while (s[i] && !is_sep(s[i], c))
		i++;
	array = malloc(sizeof(char) * (i + 1));
	if (array == 0)
		return (0);
	i = 0;
	while (s[i] && !is_sep(s[i], c))
	{
		array[i] = s[i];
		i++;
	}
	array[i] = 0;
	return (array);
}

static void	*free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free (array);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	if (!s)
		return (0);
	i = 0;
	array = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (array == 0)
		return (0);
	while (*s)
	{
		while (*s && is_sep(*s, c))
			s++;
		if (*s && !is_sep(*s, c))
		{
			array[i] = str_dup(s, c);
			if (!array[i++])
				return (free_array(array));
			while (*s && !is_sep(*s, c))
				s++;
		}
	}
	array[i] = 0;
	return (array);
}
