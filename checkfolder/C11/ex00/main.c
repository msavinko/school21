#include <unistd.h>
#define MAX 2147483647
#define MIN -2147483648

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{		
	if (nb == MIN)
		write (1, "-2147483648", 11);
	if (nb <= MAX && nb > MIN)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb < 10)
			ft_putchar(nb + '0');
		else
		{
			ft_putnbr(nb / 10);
			ft_putchar((nb % 10) + '0');
		}
	}
}

void	ft_foreach(int *tab, int length, void(*f)(int));

int	main(void)
{
	int	tab[3] = {5, 7, 9};
	ft_foreach(tab, 3, &ft_putnbr);
}
