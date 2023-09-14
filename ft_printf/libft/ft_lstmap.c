/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 07:36:32 by mjavadi           #+#    #+#             */
/*   Updated: 2022/12/01 07:37:52 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nelem;

	if (!lst || !f || !del)
		return (NULL);
	nlst = NULL;
	while (lst != NULL)
	{
		nelem = ft_lstnew(f(lst->content));
		if (!nelem)
		{
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nelem);
		lst = lst->next;
	}
	return (nlst);
}
