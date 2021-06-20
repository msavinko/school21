/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 23:31:52 by marlean           #+#    #+#             */
/*   Updated: 2021/06/18 23:38:19 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	size;
	int	i;

	i = 0;
	if (min < max)
	{
		size = max - min;
		p = (int *)malloc(size * sizeof(int));
		while (min < max)
		{
			p[i] = min;
			min++;
			i++;
		}
		return (p);
	}
	else
		return (NULL);
}
