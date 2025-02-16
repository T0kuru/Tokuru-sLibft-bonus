/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:16:58 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/11 22:28:25 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int x)
{
	if (97 <= x && x <= 122)
		return (x - 32);
	return (x);
}

/*int	main(void)
{
	unsigned char	x;

	x = a;
	printf ("%d", ft_toupper(x));
	printf ("%d", toupper(x));
}*/
