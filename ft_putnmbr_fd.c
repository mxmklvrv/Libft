/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnmbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:52:44 by mklevero          #+#    #+#             */
/*   Updated: 2025/04/17 14:53:59 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*CONTAINS ORIGINAL FT_PUTNUMMBR. NEEDS TO BE REVISED*/
#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_printchar('-');
		ft_printchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_printchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_printchar((nb % 10) + '0');
}