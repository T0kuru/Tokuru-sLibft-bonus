/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:39:11 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/11 22:17:36 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	if (!dst && !src)
		return (NULL);
	ptr_dst = (unsigned char *) dst;
	ptr_src = (unsigned char *) src;
	if (ptr_dst > ptr_src)
	{
		while (len--)
			ptr_dst[len] = ptr_src[len];
	}
	else
	{
		while (len--)
			*(ptr_dst++) = *(ptr_src++);
	}
	return (dst);
}
/*int main()
{
    char src[] = "MemCopy Test";
    char dst[50];

    ft_memmove(dst, src, strlen(src) + 1);
    printf("Test 1: %s\n", dst);

    return 0;
}*/
