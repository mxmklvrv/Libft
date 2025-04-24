/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:24:18 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/24 13:27:38 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*str;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
		return (NULL); // not sure
	if (len > s_len - start)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int main (void)
{
	char	*str;
	char	*sub1;
	char	*sub2;
	char	*sub3;
	char	*sub4;

	str = "Jason Statham";
	sub1 = ft_substr(str, 6, 7);
	sub2 = ft_substr(str, 20, 5);
	sub3 = ft_substr("", 0, 5);
	sub4 = ft_substr(str, 6, 50);
	printf("%s\n%s\n%s\n%s\n", sub1, sub2, sub3, sub4);
	free(sub1);
	free(sub2);
	free(sub3);
	free(sub4);
	return (0);
}
*/