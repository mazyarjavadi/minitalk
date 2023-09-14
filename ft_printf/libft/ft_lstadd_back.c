/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 07:23:11 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/01 09:56:09 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last_elem;

	if (alst != NULL)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			last_elem = ft_lstlast(*alst);
			last_elem->next = new;
		}
	}
}
