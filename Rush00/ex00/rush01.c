void	ft_putchar(char c);

void	ft_print_line(int length, char first, char filler, char last)
{
	int	cnt;

	cnt = 1;
	if (length > 0)
	{
		ft_putchar(first);
		cnt++;
		while (cnt <= length)
		{	
			if (cnt < length)
				ft_putchar(filler);
			if (cnt == length)
				ft_putchar(last);
			cnt++;
		}
	}
	ft_putchar('\n');
}

void	rush(int length, int width)
{
	int	cnt;

	cnt = 1;
	if (width > 0)
	{
		ft_print_line(length, '/', '*', '\\');
		cnt++;
		while (cnt <= width)
		{	
			if (cnt < width)
				ft_print_line(length, '*', ' ', '*');
			if (cnt == width)
				ft_print_line(length, '\\', '*', '/');
			cnt++;
		}
	}
}
