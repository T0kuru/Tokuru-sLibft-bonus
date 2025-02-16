/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:45:17 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/05 18:05:40 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = ft_strlen(src);
	result = (char *) malloc ((j + 1) * sizeof (char));
	if (result == NULL)
		return (NULL);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int	main(void)
{
	char	str[] = "qwe1283ertyui";
	printf("%s", ft_strdup(NULL));
}
if (!src)
	return (NULL);*/
