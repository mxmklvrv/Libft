/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:53:32 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/26 19:08:28 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*is used to set the first n bytes of the memory area pointed to by s to zero
The void * pointer s is cast to char *,we need to work with byte-level access.
Each char represents one byte of memory. */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
