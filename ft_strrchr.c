/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:44:00 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/17 16:11:59 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	ch;

	ch = (char)c;
	i = 0;
	while (s[i])
		i++;
	len = i - 1;
	while (s[len] != ch && len != 0)
		len--;
	if (s[len] == ch)
		return ((char *)&s[len]);
	else
		return (NULL);
}
/*
int	main(void)
{
	char	str[] = "function returns a pointer";
	char	c;
	char	*ptr;
	char	*pt;

	c = 'f';
	ptr = ft_strrchr(str, c);
	pt = strrchr(str, c);
	printf("%s\n", ptr);
	printf("%s\n", pt);
}
*/