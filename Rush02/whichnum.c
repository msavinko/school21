void ft_putstr(char *str);

void whichnum(char num)
{
	if (num == '1')
		ft_putstr("one ");
	else if (num == '2')
		ft_putstr("two ");
	else if (num == '3')
		ft_putstr("three ");
	else if (num == '4')
		ft_putstr("four ");
	else if (num == '5')
		ft_putstr("five ");
	else if (num == '6')
		ft_putstr("six ");
	else if (num == '7')
		ft_putstr("seven ");
	else if (num == '8')
		ft_putstr("eight ");
	else if (num == '9')
		ft_putstr("nine ");

}

void whichdec(char num)
{
	if (num == '2')
		ft_putstr("twenty ");
	else if (num =='3')
		ft_putstr("thirty ");
	else if (num =='4')
		ft_putstr("forty ");
	else if (num =='5')
		ft_putstr("fifty ");
	else if (num =='6')
		ft_putstr("sixty ");
	else if (num =='7')
		ft_putstr("seventy ");
	else if (num =='8')
		ft_putstr("eighty ");
	else if (num =='9')
		ft_putstr("ninety ");
}

void whichteen(char num)
{
	if (num == '0')
		ft_putstr("ten ");
	else if (num == '1')
		ft_putstr("eleven ");
	else if (num == '2')
		ft_putstr("twelve ");
	else if (num == '3')
		ft_putstr("thirteen ");
	else if (num == '4')
		ft_putstr("forteen ");
	else if (num == '5')
		ft_putstr("fifteen ");
	else if (num == '6')
		ft_putstr("sixteen ");
	else if (num == '7')
		ft_putstr("seventeen ");
	else if (num == '8')
		ft_putstr("eighteen ");
	else if (num == '9')
		ft_putstr("nineteen ");
}

void whichtail(int length)
{
	if (length == 1)
		ft_putstr("thousand ");
	else if (length == 2)
		ft_putstr("million ");
	else if (length == 3)
		ft_putstr("billion ");
	else if (length == 4)
		ft_putstr("trillion ");
	else if (length == 5)
		ft_putstr("quadrillion ");
	else if (length == 6)
		ft_putstr("quintillion ");
	else if (length == 7)
		ft_putstr("sextillion ");
	else if (length == 8)
		ft_putstr("septillion ");
	else if (length == 9)
		ft_putstr("octillion ");
	else if (length == 10)
		ft_putstr("nonillion ");
	else if (length == 11)
		ft_putstr("decillion ");
	else if (length == 12)
		ft_putstr("undecillion ");
}
