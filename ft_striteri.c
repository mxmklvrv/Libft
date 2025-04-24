/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:47:54 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/24 13:35:30 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 97 && *c <= 122)
		*c = *c - 32;
}
*/
/*apllying a finction to each char of s (on place)*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

int main (void)
{
	char	str[] = "shla sasha po shosse i sosala sushku";

	printf("Before: %s\n", str);
	ft_striteri(str, upper);
	printf("After: %s\n", str);
	return (0);
}
*/
