/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:04:49 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/22 16:04:53 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*not sure about long long, need to check on school pc with long*/

static int	decimal(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
static char	*transform_to_str(char *str, int i, long j)
{
	if (j == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (j < 0)
	{
		str[0] = '-';
		j *= -1;
	}
	while (j > 0)
	{
		str[i] = (j % 10) + '0';
		j /= 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	long	j;
	char	*str;

	j = n;
	i = decimal(j);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	str = transform_to_str(str, i, j);
	return (str);
}
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(69699));
	printf("%s\n", ft_itoa(-999));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(999999999));
	return (0);
}