/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:35:29 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/11 21:36:51 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int x)
{
	if (48 <= x && x <= 57)
		return (1);
	return (0);
}

/*int	main(void)
{
	unsigned char	x;

	x = '2';
	printf ("%d", ft_isalpha(x));
}*/
