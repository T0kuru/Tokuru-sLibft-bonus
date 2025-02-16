/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:26:06 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/11 21:52:15 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*(ptr++) = 0;
		n--;
	}
}

/*int	main(void)
{
	char	str[] = "i am become death destroyer of worlds";
	printf("%s\n", str);
	printf("%\n", bzero(str, strlen(str));
	ft_bzero(str, 6);
	printf("%s\n", str);
}*/
