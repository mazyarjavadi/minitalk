/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 07:33:00 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/01 07:34:38 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*temp;

	if (lst != NULL && del != NULL)
	{
		current = *lst;
		while (current != NULL)
		{
			temp = current->next;
			ft_lstdelone(current, del);
			current = temp;
		}
		*lst = NULL;
	}
}
