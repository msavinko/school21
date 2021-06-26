#include <stdio.h>
#define LEN 3
int my_function(int x)
{
	if (x < 0)
		return (0);
	if (x > 0 && x <5)
		return (1);
	if (x == 5)
		return (5);
	else 
		return (100500);
}

int *ft_map(int *tab, int length, int(*f)(int));

int main(void)
{
	int i = 0;
	int	tab[LEN] = {-1, 2, 9};
	int *map = ft_map(tab, LEN, &my_function);
	while (i < LEN)
	{
		printf("%d ", map[i]);
		i++;
	}
	return (0);
}
