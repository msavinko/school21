void	ft_putchar(char c);

void	ft_print_line(int length, char border, char filler)
{
	int	cnt;

	cnt = 1;
	if (length > 0)
	{
		while (cnt <= length)
		{
			if ((cnt == 1) || (cnt == length))
				ft_putchar(border);
			else
				ft_putchar(filler);
			cnt++;
		}
		ft_putchar('\n');
	}
}

void	rush(int length, int width)
{
	int	cnt;

	cnt = 1;
	if (width > 0)
	{
		ft_print_line(length, 'A', 'B');
		cnt++;
		while (cnt < width)
		{
			ft_print_line(length, 'B', ' ');
			cnt++;
		}
		if (cnt == width)
			ft_print_line(length, 'C', 'B');
	}
}
