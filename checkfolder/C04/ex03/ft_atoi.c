/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:35:50 by marlean           #+#    #+#             */
/*   Updated: 2021/06/15 16:37:32 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	minus = 1;
	result = 0;
	while ((str[i] != '\0') && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while ((str[i] != '\0') && ((str[i] == '-') || (str[i] == '+')))
	{
		if (str[i] == '-')
			minus = minus * (-1);
		i++;
	}
	while ((str[i] != '\0') && (str[i] > 47 && str[i] < 58))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result = result * minus;
	return (result);
}
