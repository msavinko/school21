/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 19:24:16 by marlean           #+#    #+#             */
/*   Updated: 2021/06/14 10:44:25 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	
	while ((s1[i] != '\0') && (i <= n))
	{
		if	(s1[i]==s2[i])
		{	
			
			i++;
		}
		else 
			return (s1[i] - s2[i]);
	}
	return (0);
}
int main(void)
{
	printf("%d\n", ft_strncmp("himyname", "himyname", 4));
	printf("%d\n", strncmp ("himyname", "himyname", 4));
	printf("%d\n", ft_strncmp("himiname", "himynAme", 4));
	printf("%d\n", strncmp("himiname", "himynAme", 4));
	printf("%d\n", ft_strncmp("himiname", "hiamynAme", 4));
	printf("%d\n", strncmp("himiname", "hiamynAme", 4));
	return (0);
}

