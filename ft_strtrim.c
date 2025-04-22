/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:27:04 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/22 16:27:12 by mklevero         ###   ########.fr       */
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
char	*ft_strdup(const char *s)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while(i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
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

static int	to_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len_t_str;
	char	*t_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup("")); // check here.
	start = 0;
	while (s1[start] && to_trim(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && to_trim(s1[end], set))
		end--;
	len_t_str = end - start + 1;
	t_str = (char *)malloc(sizeof(char) * (len_t_str + 1));
	if (t_str == NULL)
		return (NULL);
	ft_strlcpy(t_str, s1 + start, len_t_str + 1);
	return (t_str);
}
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *res1 = ft_strtrim(" Hello World ", " ");
	char *res2 = ft_strtrim("xxx-Hello World-xxx", "x-");
	char *res3 = ft_strtrim("Hello World", "x-");
	char *res4 = ft_strtrim("Hello World", "");
	char *res5 = ft_strtrim("?????", "?");
	char *res6 = ft_strtrim("", "");
	char *res7 = ft_strtrim("", " ");

	printf("%s\n", res1);
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n", res1, res2, res3, res4, res5, res6,
		res7);
	free(res1);
	free(res2);
	free(res3);
	free(res4);
	free(res5);
	free(res6);
	free(res7);
}