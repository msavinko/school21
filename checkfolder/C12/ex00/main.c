#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int	main(void)
{
	t_list	*temp;

	temp = ft_create_elem("GreenPeace");
	printf("%s", ((char *)(temp->data)));
	return (0);
}
