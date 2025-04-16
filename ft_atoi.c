/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:28:57 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/16 10:28:57 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int num;
    int neg;

    i = 0;
    num = 0;
    neg = 1;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            neg *= -1;
        i++;
    }
    while(ft_isdigit(str[i]))
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return (num * neg);
}