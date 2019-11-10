#include "ft_btree.h"
#include <stdlib.h>

t_btree *btree_create_node(void *data)
{
    t_btree *tree;

    tree = (t_btree *)malloc(sizeof(t_btree));
    tree->data = data;
    tree->left_child = 0;
    tree->right_child = 0;
    return (tree);
}