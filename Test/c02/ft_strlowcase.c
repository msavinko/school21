#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
int main(void)
{
	char s[] = {"AUSTRALIA vs New Zealand"};
	char *p;

	p = ft_strlowcase(s);
	printf("%s", p);
}
