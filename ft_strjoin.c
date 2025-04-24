/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:07:49 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/24 12:57:05 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < (n - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
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
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_1;
	size_t	len_2;
	size_t	len_total;
	char	*joined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	len_total = len_1 + len_2;
	joined = (char *)malloc(sizeof(char) * (len_total + 1));
	if (joined == NULL)
		return (NULL);
	ft_strlcpy(joined, s1, len_total + 1);
	ft_strlcat(joined, s2, len_total + 1);
	return (joined);
}
#include <stdio.h>

int	main(void)
{
	char *s1 = ft_strjoin("hello", " world");
	char *s2 = ft_strjoin("hello", " 12345");
	char *s3 = ft_strjoin("", " world");
	char *s4 = ft_strjoin("hello", "");
	char *s5 = ft_strjoin("", "");

	printf("%s\n%s\n%s\n%s\n%s\n", s1, s2, s3, s4, s5);
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	free(s5);
}