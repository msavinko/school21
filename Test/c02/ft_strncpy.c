#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char src[] = {"Australia"};
	char dest[9];
	char *p;
	unsigned int n = 3;
	p = ft_strncpy(dest, src, n);
	printf("%s", p);
	return (0);
}
