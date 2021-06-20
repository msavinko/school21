/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 15:08:54 by marlean           #+#    #+#             */
/*   Updated: 2021/06/14 10:44:52 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
 
 int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main(void)
{
	printf("%d", ft_strcmp("hI", "ai"));
	printf("%d", strcmp("hI", "ai"));
	return (0);
}
