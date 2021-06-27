#include <stdio.h>

void choosenum(char *num, int length, int i);
void ft_putstr(char *str);
void printnum(char *num, int length, int i, int k, int inilen);
void whichnum(char num);
void whichdec(char num);
void whichteen(char num);
void whichtail(int length);

void checknum(char *num)
{

	int length = 0; //length of num
	int i ; //index
	int k = 0; //count didgits (ex. million, billion)
	int inilen; //initial length of num
	while (num[length])
		length++;
	inilen = length;
	i = length;
	printnum(num, length, i, k, inilen);
}

void printnum(char *num, int length, int i, int k, int inilen)
{
	if (length <= 3)
		choosenum(num, length, i);
	else
	{
		k++;
		printnum(num, length - 3, i-3, k, inilen);
		whichtail(k);
		k--;
		choosenum(num, 3, i);
	}
}

void choosenum(char *num, int length, int i)
{
	if (length == 3)
	{
		whichnum(num[i-3]);
		ft_putstr("hundred ");
		if (num[i-2] == '1')
			whichteen(num[i-1]);
		else
		{
			whichdec(num[i-2]);
			whichnum(num[i-1]);
		}
	}
	else if (length == 2)
	{
		if (num[i-2] == '1')
			whichteen(num[i-1]);
		else
		{
			whichdec(num[i-2]);
			whichnum(num[i-1]);
		}
	}
	else
		whichnum(num[i-1]);

}
