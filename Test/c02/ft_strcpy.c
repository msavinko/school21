#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (*src)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
int main(void)
{
	char src[] = {"Australia"};
	char dest[9];
	char *p;
	p = ft_strcpy(dest, src);
	printf("%s", p);
	return (0);
}
