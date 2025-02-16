/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:40:46 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/09 18:02:17 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_char(char *result, unsigned int nbr, long int len)
{
	while (nbr > 0)
	{
		result[len] = '0' + (nbr % 10);
		nbr /= 10;
		len--;
	}
	return (result);
}

long int	ft_len(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*result;
	long int		len;
	unsigned int	nbr;

	len = ft_len(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len--] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
	{
		nbr = (unsigned int)(-n);
		result[0] = '-';
	}
	else
		nbr = n;
	result = ft_char(result, nbr, len);
	return (result);
}
