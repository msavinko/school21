#include <stdio.h>

char *ft_strupcase(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				i++;
			}
		else
			i++;
	}
	return (str);
}

int main(void)
{
	char s[] = {"Australia !!"};
	char *p;

	p = ft_strupcase(s);
	printf("%s", p);
}
