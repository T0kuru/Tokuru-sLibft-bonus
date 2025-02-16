/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:55:02 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/16 20:36:47 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*nechto;

	nechto = NULL;
	if (!lst || !del || !f)
		return (NULL);
	while (lst)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (!new_lst)
		{
			ft_lstdelone(new_lst, (*del));
			return (NULL);
		}
		ft_lstadd_back(&nechto, new_lst);
		lst = lst->next;
	}
	return (nechto);
}
