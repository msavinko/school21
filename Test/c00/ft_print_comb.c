#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_comb(void)
{
	int i = 0;
	int j;
	int k;

	while (i <= 7)
	{
		j = 1;
		while (i >= j)
				j++;
		while (j <= 8)
		{
			k = 2;
			while (j >= k)
				k++;
			while (k <= 9)
			{
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k + '0');
				ft_putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
}

// int main(void)
// {
// 	ft_print_comb();
// }
