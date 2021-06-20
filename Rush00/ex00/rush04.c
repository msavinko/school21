void	ft_putchar(char c);

void	ft_print_line(int length, char left, char right, char filler)
{
	int	cnt;

	cnt = 1;
	if (length > 0)
	{
		while (cnt <= length)
		{
			if (cnt == 1)
				ft_putchar(left);
			else if (cnt == length)
				ft_putchar(right);
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
		ft_print_line(length, 'A', 'C', 'B');
		cnt++;
		while (cnt < width)
		{
			ft_print_line(length, 'B', 'B', ' ');
			cnt++;
		}
		if (cnt == width)
			ft_print_line(length, 'C', 'A', 'B');
	}
}
