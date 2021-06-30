#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	int k;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i+1])
		{
			k = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = k;
			i = -1;
		}
		i++;
	}
}

// int main(void)
// {
// 	int arr[] = {1, 6, 3, 8};
// 	int i = 0;


// 	ft_sort_int_tab(arr, 4);
// 	while (i <= 3)
// 	{
// 		printf("%d", arr[i]);
// 		i++;
// 	}
// }
