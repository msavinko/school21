/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 21:51:06 by marlean           #+#    #+#             */
/*   Updated: 2021/06/18 22:30:11 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*st_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = 0;
	while (src[i])
		i++;
	str = (char *) malloc((i + 1) * sizeof(char));
	while (src[j])
	{
		str[j] = src[j];
		j++;
	}
	return (str);
}
