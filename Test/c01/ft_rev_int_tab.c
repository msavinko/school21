// #include <stdio.h>
// #include <unistd.h>
// void		ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }
// void		ft_put_arr_int(int *tab, int size)
// {
// 	int i = 0;
// 	while (i < size)
// 	{
// 		ft_putchar(tab[i] + '0');
// 		i++;
// 	}
// }

void ft_rev_int_tab(int *tab, int size)
{
	int i = -1;

	char k;
	while (++i <= --size)
	{
		k = tab[i];
		tab[i] = tab[size];
		tab[size] = k;
	}
}
// int main(void)
// {
// 	int arr[] = {3, 4, 5, 6, 7};
// 	ft_rev_int_tab(arr, 5);
// 	ft_put_arr_int(arr, 5);
// 	ft_putchar('\n');
// 	return (0);
// }
