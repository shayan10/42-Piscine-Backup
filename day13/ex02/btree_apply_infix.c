#include "ft_btree.h"

void btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
    btree_apply_infix(root->left, applyf);
    applyf(root->data);
    btree_apply_infix(root->right, applyf);
}