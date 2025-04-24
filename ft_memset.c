/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:19:59 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/24 13:33:57 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char str[50] = "ehal greka  cherez reku";
	char str_1[50] = "ehal greka  cherez reku";
	memset(str, 'O', 6);
	ft_memset(str_1, 'O', 6);

	int arr[10];
	int arr_1[10];
	memset(arr, 0, sizeof(arr));
	ft_memset(arr_1, 0, sizeof(arr_1));

	printf("Array after memset(): ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("Array after ft_memset(): ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr_1[i]);
	}
	printf("\n");

	printf("%s\n", str);
	printf("%s\n", str_1);
	return (0);
}*/