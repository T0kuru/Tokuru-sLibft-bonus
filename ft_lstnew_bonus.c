/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:50:04 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/16 20:40:26 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_first_node;

	new_first_node = (t_list *)malloc(sizeof(t_list));
	if (!new_first_node)
		return (NULL);
	new_first_node->content = content;
	new_first_node->next = NULL;
	return (new_first_node);
}
