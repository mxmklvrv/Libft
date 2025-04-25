/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:54:14 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/25 15:21:16 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = 0;
	while ((unsigned char)s[i] != ch && s[i] != '\0')
		i++;
	if ((unsigned char)s[i] == ch)
		return ((char *)&s[i]);
	return (NULL);
}

/*x
int	main(void)
{
	char	str[] = "function returns a pointer";
	char	c;
	char	*ptr;
	char	*pt;

	c = '\0';
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
