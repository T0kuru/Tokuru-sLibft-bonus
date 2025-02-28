/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:27:37 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/11 21:43:12 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int x)
{
	if (0 <= x && x <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	unsigned char	x;

	x = "-5";
	printf ("%d", ft_isascii(x));
}*/
