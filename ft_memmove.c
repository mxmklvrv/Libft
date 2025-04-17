/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:25:21 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/17 17:59:02 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*copies n bytes from src to dest, may overlap*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*copy_dest;
	unsigned char	*copy_src;
	size_t			i;

	copy_dest = (unsigned char *)dest;
	copy_src = (unsigned char *)src;
	i = 0;
	if (copy_dest < copy_src)
	{
		while (i < n)
		{
			copy_dest[i] = copy_src[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			copy_dest[n] = copy_src[n];
		}
	}
	return (dest);
}

int	main(void)
{
	char	src[30] = "abcdefghij";
	char	dest[30] = "12345655";
	char	src_1[30] = "123456789";
	char	src_2[30] = "1234567";

	ft_memmove(dest, src, 5);
	ft_memmove(src_1 + 5, src_1, 5);
	ft_memmove(src_2, src_2 + 3, 5);
	printf("%s\n%s\n%s\n", dest, src_1, src_2);
}
