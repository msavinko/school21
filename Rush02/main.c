#include <unistd.h>
//#include <stdlib.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>

void ft_putstr(char *str);
void checknum(char *num);

int valid_integer(char *num)
{
	int i = 0;
	while (num[i])
	{
		if (!(num[i] >= '0' && num[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (valid_integer(argv[1]))
		{
			checknum(argv[1]);
		}
		else
			ft_putstr("Invalid integer");
	}
	else
		ft_putstr("Error");
	return (0);
}
