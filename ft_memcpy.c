/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:23:49 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/17 14:44:04 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/*copies n bytes from src to dest, may not overlap*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*copy_dest;
	unsigned char	*copy_src;
	size_t			i;

	copy_dest = (unsigned char *)dest;
	copy_src = (unsigned char *)src;
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
	int	src[5] = {9, 8, 7, 6, 5};
	int	dest[5];
	int	src_1[5] = {9, 5, 7, 6, 5};
	int	dest_1[5];

	memcpy(dest, src, sizeof(src));
	ft_memcpy(dest, src, sizeof(src));
	memcpy(dest_1, src_1, sizeof(src_1));
	for (int i = 0; i < 5; i++)
		printf("%d ", dest[i]);
	printf("\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", dest_1[i]);
	printf("\n");
}
