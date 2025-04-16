/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:07:18 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/16 16:09:50 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n <= 0)
		return (ft_strlen(src));
	while (src[i])
	{
		if (i < (n - 1))
		{
			dst[i] = src[i];
			j++;
		}
		i++;
	}
	dst[j] = '\0';
	return (i);
}
/*
int	main(void)
{
	char	src[] = "odin dva tri";
	char	dst[7];
	size_t	len;

	len =  ft_strlcpy(dst, src, sizeof(dst));
	printf(%d, len);
}
*/