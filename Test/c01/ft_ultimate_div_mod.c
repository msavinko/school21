#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

int main(void)
{
	int a = 9;
	int b = 3;
	printf("%d, %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d\n", a, b);
}
