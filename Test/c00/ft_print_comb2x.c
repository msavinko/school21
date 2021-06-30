#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					ft_putchar(' ');
					ft_putchar(a + '0');
					ft_putchar(b + '0');
					ft_putchar(' ');
					ft_putchar(c + '0');
					ft_putchar(d + '0');
					ft_putchar(',');
					d++;
				}
				c++;
				d = 0;
			}
			b++;
			c = 0;
			d = 0;
		}
		a++;
		b = 0;
		c = 0;
		d = 0;
	}
}
// int main(void)
// {
// 	ft_print_comb2();
// }
