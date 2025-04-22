/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:54:14 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/22 18:33:50 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = (char)c;
	i = 0;
	while (s[i] != ch && s[i] != '\0')
		i++;
	if (s[i] == ch)
		return ((char *)&s[i]);
	else
		return (NULL);
}

int	main(void)
{
	char	str[] = "function returns a pointer";
	char	c;
	char	*pt;
	char	*ptr;

	c = '+';
	ptr = ft_strchr(str, c);
	pt = strchr(str, c);
	if (!pt)
		printf("HEHE\n");
	else
		printf("%p\n", ptr);
	printf("%p\n", pt);
}

/*
int	main(void)
{
	char	str[] = "function returns a pointer";
	char	c;
	char	*ptr;
	char	*pt;

	c = '+';
	ptr = ft_strchr(str, c);
	pt = strchr(str, c);
	if (ptr)
		printf("ft_strchr: %s\n", ptr);
	else
		printf("ft_strchr: NULL\n");
	if (pt)
		printf("strchr: %s\n", pt);
	else
		printf("strchr: NULL\n");
	return (0);
}
*/