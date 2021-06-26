#include <stdio.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item);

int	main(void)
{
	t_btree	*temp;

	temp = btree_create_node("Viola!");
	printf("%s", ((char *)temp->item));
	return (0);
}
