/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:45:27 by marlean           #+#    #+#             */
/*   Updated: 2021/06/15 17:20:22 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			res = res * nb;
			i++;
		}
	}
	return (res);
}
