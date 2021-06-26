#include <stdio.h>
#include <stdlib.h>

int ft_any(char **tab, int(*f)(char*));

int my_f(char *c)
{
	int i = 0;
	while(c[i])
	{
		if (c[i] == 'W')
			return (3);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	a;
	char **str;

	str = malloc(1000);
	str[0] = "elcome";
	str[1] = "WHello";
	
	a = ft_any(str, &my_f);
	printf("%d\n", a);
	free (str);
	return (0);
}
