#include "ft_btree.h"

void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
    if (root)
    {
        //Need to traverse preorder
        applyf(root->data);
        btree_apply_prefix(root->left_child, applyf);
        btree_apply_prefix(root->right_child, applyf);
    }
}