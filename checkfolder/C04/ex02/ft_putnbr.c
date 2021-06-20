/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:55:27 by marlean           #+#    #+#             */
/*   Updated: 2021/06/14 17:45:08 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MAX 2147483647
#define MIN -2147483647

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < MAX && nb > MIN)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb < 10)
			ft_putchar(nb + '0');
		else
		{
			ft_putnbr(nb / 10);
			ft_putchar((nb % 10) + '0');
		}
	}
}
