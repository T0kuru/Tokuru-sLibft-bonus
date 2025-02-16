/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:06:48 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/15 17:51:45 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_word_to_str(const char *s, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *) malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static size_t	ft_word_nbr(char const *s, char c)
{
	size_t	i;
	size_t	nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			nbr++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (nbr);
}

static char	**free_whole_shit(char **s, int n)
{
	while (n > 0)
	{
		free(s[n - 1]);
		n--;
	}
	free(s);
	return (NULL);
}

static char	**ft_doit(const char *s, char c, size_t words_nbr, char **str)
{
	size_t	i;
	size_t	j;
	size_t	word_len;

	i = 0;
	j = 0;
	while (s[i] && j < words_nbr)
	{
		while (s[i] == c)
			i++;
		word_len = 0;
		while (s[i + word_len] && s[i + word_len] != c)
			word_len++;
		str[j] = ft_word_to_str(s + i, word_len);
		if (!str[j])
			return (free_whole_shit(str, j));
		i += word_len;
		j++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	words_nbr;

	if (!s)
		return (NULL);
	words_nbr = ft_word_nbr(s, c);
	str = (char **) malloc(sizeof(char *) * (words_nbr + 1));
	if (!str)
		return (NULL);
	str = ft_doit(s, c, words_nbr, str);
	return (str);
}
