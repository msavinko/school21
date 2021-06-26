#include <stdio.h>
#include <stdlib.h>
#define LEN 2

int ft_count_if(char **tab, int length, int(*f)(char*));

int my_function(char *str)
{
	int i = 0;
	int k = 0;
	while(str[i])
	{
		if (str[i] == 'l')
			k++;
		i++;
	}
	return (k);
}

int main(void)
{
	int	a;
	char **str;

	str = malloc(1000);
	str[0] = "Helo";
	str[1] = "World";
	
	a = ft_count_if(str, LEN, &my_function);
	printf("%d ", a);	
	return (0);
}
