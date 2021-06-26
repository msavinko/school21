/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 21:51:06 by marlean           #+#    #+#             */
/*   Updated: 2021/06/26 21:08:53 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*st_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	if ((str = (char *) malloc((i + 1) * sizeof(char))) == ((void *)0))
		return ((void *)0);
	while (i >= 0)
	{
		str[i] = src[i];
		i--;
	}
	return (str);
}
