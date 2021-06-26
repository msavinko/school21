/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:14:52 by marlean           #+#    #+#             */
/*   Updated: 2021/06/24 14:53:13 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	sort;
	int revsort;

	i = 0;
	sort = 1;
	revsort = 1;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) < 0)
			sort++;
		if (f(tab[i], tab[i + 1]) > 0)
			revsort++;
		if (f(tab[i], tab[i + 1]) == 0)
		{
			sort++;
			revsort++;
		}
		i++;
	}
	if ((sort == length) || (revsort == length))
		return (1);
	else
		return (0);
}
