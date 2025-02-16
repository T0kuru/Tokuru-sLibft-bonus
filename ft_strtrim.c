/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:11:22 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/05 20:07:21 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	s1_len;

	i = 0;
	s1_len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1_len > i && ft_strchr(set, s1[s1_len - 1]))
		s1_len--;
	if (s1_len <= i)
		return (ft_strdup(""));
	result = (char *) malloc (sizeof(char) * (s1_len - i + 1));
	if (!result)
		return (NULL);
	ft_memmove(result, s1 + i, s1_len - i);
	result[s1_len - i] = '\0';
	return (result);
}
