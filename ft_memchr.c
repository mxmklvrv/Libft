/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:58:08 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/25 15:27:35 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
// proverit' 
/*function  scans  the  initial n bytes of the memory area
		pointed to by s for the first instance of c.*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;
	unsigned char	ch;
	size_t			i;

	ps = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ps[i] == ch)
			return (&ps[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "To begin,you must 1 reimplement a set of functions libc.";
// 	char	*ptr;
// 	char	*ptr_1;

// 	ptr = ft_memchr(str, 't', strlen(str));
// 	ptr_1 = memchr(str, 't', strlen(str));
// 	printf("%s\n%s\n", ptr, ptr_1);
// }

