#include <stdio.h>
int ft_recursive_factorial(int nb);

int main(void)
{
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(-5));
	printf("%d\n", ft_recursive_factorial(11));
	printf("%d\n", ft_recursive_factorial(13));
	return (0);
}
