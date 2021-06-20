/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:23:57 by marlean           #+#    #+#             */
/*   Updated: 2021/06/16 19:02:35 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || (power == 0))
		return (1);
	if (power % 2 == 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (ft_recursive_power(nb * nb, power / 2));
}
