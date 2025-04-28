/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:25:21 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/28 12:39:47 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

/*copies n bytes from src to dest, may overlap*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*copy_dest;
	const unsigned char	*copy_src;
	size_t			i;

	copy_dest = (unsigned char *)dest;
	copy_src = (const unsigned char *)src;
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
	char src2[] = "Hello, world!";
    printf("Before overlapping memmove:\n");
    printf("src2: \"%s\"\n", src2);

    ft_memmove(src2 + 2, src2, 5);
    printf("After overlapping ft_memmove:\n");
    printf("src2: \"%s\"\n", src2);
}
