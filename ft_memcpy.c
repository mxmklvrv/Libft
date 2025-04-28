/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:23:49 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/28 15:51:05 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

/*copies n bytes from src to dest, may not overlap
(share part of the same physical memory.)*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*copy_dest;
	const unsigned char	*copy_src;
	size_t				i;

	copy_dest = (unsigned char *)dest;
	copy_src = (const unsigned  char *)src;
	i = 0;
	while (i < n)
	{
		copy_dest[i] = copy_src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char str_memcpy[] = "Hello, world!";
	char dest_memcpy[20];
	char str_1_memcpy[] = "Hello, world!";
	char dest_1_memcpy[20];

	ft_memcpy(dest_memcpy, str_memcpy, strlen(str_memcpy) + 1);
	memcpy(dest_1_memcpy, str_1_memcpy, strlen(str_1_memcpy) + 1);
	printf("ft_memcpy result: %s\n", dest_memcpy);
	printf("memcpy result: %s\n", dest_1_memcpy);

    printf("Original string with overlap: %s\n", str_memcpy);
    ft_memcpy(str_memcpy + 2, str_memcpy, 5); 
	memcpy(str_1_memcpy + 2, str_1_memcpy, 5);
    printf("After ft_memcpy (overlap): %s\n", str_memcpy);
	printf("After memcpy (overlap): %s\n", str_1_memcpy);

}

