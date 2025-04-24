/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:58:05 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/24 12:58:07 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
*/

/*Applying a function to each char of s**/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>


int main (void)
{
	char const	*s;
	char		*res;

	s = "ehal greka cherez reku";
	res = ft_strmapi(s, upper);
	if ( res != NULL)
	{
		printf("Original: %s\n", s);
		printf("Res  : %s\n", res);
		free(res);
	}
	else
		printf("Faild");
	return (0);
}
*/
