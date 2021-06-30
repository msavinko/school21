#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}

int main(void)
{
	char s[] = {"\v"};

	printf("%d", ft_str_is_printable(s));
	return (0);
}
