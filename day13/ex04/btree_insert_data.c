#include "ft_btree.h"

void btree_insert_data(t_btree **root, void *item, int (*cmp)(void *, void *))
{
    t_btree *curr;

    curr = *root;
    if (cmp(curr->data, item) > 0)
        btree_insert_data(&curr->left, item, cmp);
    else
        btree_insert_data(&curr->right, item, cmp);
    if (!curr)
    {
        curr->data = item;
        curr->left = 0;
        curr->right = 0;
    }
}