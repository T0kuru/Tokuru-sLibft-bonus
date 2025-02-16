/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:19:01 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/11 22:23:40 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(src);
	if (!src)
		return (0);
	if (dstsize == 0)
		return (n);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (n);
}

/*int	main(void)
{
	size_t dstsize = 5;
	char dest[50] = "Cut my life into pieces This is my last resort";
	const char src[] = "Suffocation, No breathing";
	ft_strlcpy(dest, src, dstsize);
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	return (0);
}*/
