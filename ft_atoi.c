/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:41:35 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/16 19:34:54 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	count;
	int	result;

	count = 1;
	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45)
	{
		count *= -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] >= '0' && str[i] <= 57)
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	result *= count;
	return (result);
}

/*int	main(void)
{
char	str[] = " +-1232q354ab567";
	printf("%d\n", ft_atoi(str)); 
	printf("%d", atoi(str)); 
}*/
