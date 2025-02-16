/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:26:27 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/11 21:46:01 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*int main()
{
	char str[] = "Na menya gladit igrivo PIVO, PIVO, PIVO, PIVO!!!";
	size_t length = ft_strlen(str);
	char str2[20];
	printf("%zu\n %zu", length,strlen(str2));
}*/
