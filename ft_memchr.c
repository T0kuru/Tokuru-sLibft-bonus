/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:00:22 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/05 16:06:33 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	x;

	x = (unsigned char) c;
	ptr_s = (unsigned char *) s;
	while (n > 0)
	{
		if (*ptr_s == x)
			return (ptr_s);
		ptr_s++;
		n--;
	}
	return (NULL);
}
