/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:03:05 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/26 17:32:43 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*allocates memory, nmemb - numbr of elements to allocate, size
	- size of each element 
	allocates memory for an array and initializes it to zero*/

// check the overflosituation
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	t_bytes;

	t_bytes = nmemb * size;
	if (size && (t_bytes / size) != nmemb)
		return (NULL);
	ptr = malloc(t_bytes);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, (t_bytes));
	return (ptr);
}
