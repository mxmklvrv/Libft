/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:08:52 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/16 18:44:16 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t d_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < d_size)
		i++;
	if (i >= d_size)
		return (d_size + ft_strlen(src));
	while (src[j] && ((i + j + 1) < d_size))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

int	main(void)
{
	char	dst[67] = "odin";
	char	*src;
	size_t	res;

	src = "dva";
	res = ft_strlcat(dst, src, sizeof(dst));
	printf("%s\n", dst);
	printf("%zu", res);
}
