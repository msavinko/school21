#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
int main(void)
{
	char s[] = {"welcome to new zealand"};

	printf("%s", ft_strcapitalize(s));
	return (0);
}
