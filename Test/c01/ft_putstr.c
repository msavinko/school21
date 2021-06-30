#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int main(void)
{
	char str[] = {'H', 'e', 'l', 'l', 'o'};
	ft_putstr(str);
	return (0);
}
