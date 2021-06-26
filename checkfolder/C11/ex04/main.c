#include <stdio.h>

int	my_f(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	else
		return (1);
}

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int	main(void)
{
	int	tab[5] = {2, 3, 9, 7, 9};
	int res = ft_is_sort(tab, 5, &my_f);
	printf("%d", res);
	return (0);
}
