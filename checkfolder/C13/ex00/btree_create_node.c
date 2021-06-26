#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*tree;

	tree = malloc(sizeof(t_btree));
	if (tree)
	{
		tree->left = ((void *)0);
		tree->right = ((void *)0);
		tree->item = item;
	}
	return (tree);
}
