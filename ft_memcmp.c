/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:27:29 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/25 18:47:20 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	     *copy_s1;
	unsigned char	*copy_s2;
	size_t			i;

	copy_s1 = (unsigned char *)s1;
	copy_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (copy_s1[i] != copy_s2[i])
			return (copy_s1[i] - copy_s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "abc";
// 	char	str_1[] = "ABC";
// 	int		res;
// 	int		res_1;

// 	res = ft_memcmp(str, str_1, 3);
// 	res_1 = memcmp(str, str_1, 3);
// 	printf("%d\n%d\n", res, res_1);
// }
