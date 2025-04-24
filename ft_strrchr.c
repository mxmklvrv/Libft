/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:44:00 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/24 13:37:16 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	ch;

	ch = (unsigned char)c;
	len = 0;
	while (s[len])
		len++;
	while (len >= 0)
	{
		if ((unsigned char)s[len] == ch)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "function returns a pointer";
	char	c;
	char	*ptr;
	char	*pt;

	c = '+';
	ptr = ft_strrchr(str, c);
	pt = strrchr(str, c);
	printf("%s\n", ptr);
	printf("%s\n", pt);
}
