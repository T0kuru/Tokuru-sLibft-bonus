/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:02:06 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/11 21:45:05 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int x)
{
	if (32 <= x && x <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	unsigned char	x;

	x = '7';
	printf ("%d", ft_isalpha(x));
}*/
