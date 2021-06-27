#include <unistd.h>

void	ft_putstr(char *str)
{
	char	l;
	int		i;

	i = 0;
	l = str[i];
	while (str[i] != '\0')
	{
		write(1, &l, 1);
		i++;
		l = str[i];
	}
}
