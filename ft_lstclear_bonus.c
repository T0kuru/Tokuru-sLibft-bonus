/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:59:32 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/16 19:36:24 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*end_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		end_node = (*lst)->next ;
		del((*lst)->content);
		free(*lst);
		*lst = end_node;
	}
}
// *lst = NULL is pointless, since end node is the
// last node and it's next would point to NULL by default
