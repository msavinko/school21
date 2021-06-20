/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:14:25 by marlean           #+#    #+#             */
/*   Updated: 2021/06/17 17:37:37 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char *str)
{
	char	l;
	int		i;

	i = 0;
	l = str[i];
	while (str[i] != '\0')
	{
		write(1, &l, 1);
		i++;
		l = str[i];
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while ((0 < argc) && (argv[i] != '\0'))
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
