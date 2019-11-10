#ifndef FT_BTREE_H
#define FT_BTREE_H

typedef struct s_btree t_btree;

struct s_btree
{
    void *data;
    t_btree *left_child;
    t_btree *right_child;
};

t_btree *btree_create_node(void *data);

#endif