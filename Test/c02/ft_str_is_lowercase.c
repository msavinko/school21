#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

int main(void)
{
	char s[] = {"welcomeonboard"};

	printf("%d", ft_str_is_lowercase(s));
	return (0);
}
