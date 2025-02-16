/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:31:49 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/12 19:16:27 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	x;
	int				i;

	i = 0;
	x = (char)c;
	while (s[i] != x)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)(s + i));
}

/*int main()
{
	char * strConst = "C";

	//char * p = malloc(sizeof(char) * 7);	

	//strConst = p;

	const char *res;
	res = ft_strchr(strConst,67 );
	res[0] = 'B';
	printf("%s %p\n", strConst, strConst);
	printf("%s %p\n", res, res);

	return 0;
}*/
