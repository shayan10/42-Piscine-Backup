#include "ft_btree.h"
#include <stdlib.h>

void *search_btree_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
    void *res;

    res = 0;
    if (cmpf(root->data, data_ref) == 0)
        res = root->data;
    else if (cmpf(root->data, data_ref) > 0)
        search_btree_item(root->left, data_ref, cmpf);
    else
        search_btree_item(root->right, data_ref, cmpf);

    if (!res)
        return (NULL);
    return (res);
}