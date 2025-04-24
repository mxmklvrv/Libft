/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:03:05 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/22 16:03:13 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*allocates memory, count - numbr of elements to allocate, size
	- size of each element */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;
	size_t t_bytes;

	t_bytes = count * size;
	if (size && (t_bytes/size) != count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, (count * size));
	return (ptr);
}
