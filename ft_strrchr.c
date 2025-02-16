/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:10:50 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/12 19:11:19 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	x;
	size_t			i;

	i = ft_strlen(s);
	x = (char)c;
	while (s[i] != x)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *) &s[i]);
}
