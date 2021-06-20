#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	printf("%d\n", ft_strlen("Ambassador"));
	printf("%d\n", ft_strlen("Hello00*&^"));
	printf("%d\n", ft_strlen(""));
	return (0);
}
