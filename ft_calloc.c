/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:39:44 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/05 20:25:10 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			combined;
	size_t			i;

	i = 0;
	combined = count * size;
	if (count != 0 && combined / count != size)
		return (NULL);
	ptr = malloc(combined);
	if (!ptr)
		return (NULL);
	while (i < combined)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
 * if (!size)
 * 	return (NULL);*/
