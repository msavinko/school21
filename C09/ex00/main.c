
#include <stdio.h>

void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char hi[] = "hello";
	char w[] = "world";
	char c = 'h';
	int	a = 5;
	int b = 8;

	ft_putchar(c);
	printf("\n");
	ft_swap(&a, &b);
	printf("%d %d\n", a,b);
	ft_putstr(hi);
	printf("\n%d", ft_strlen(hi));
	printf("\n%d", ft_strcmp(hi, w));
	return (0);
}
