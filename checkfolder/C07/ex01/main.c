#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int *arg;
	int i = 0;
	arg = ft_range(5, 10);
	while (i < 6)
	{
		printf("%d\n", arg[i]);
		i++;
	}
	return (0);
}
