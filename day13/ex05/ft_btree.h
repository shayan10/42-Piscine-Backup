#ifndef FT_BTREE_H
#define FT_BTREE_H

typedef struct s_btree t_btree;

struct s_btree
{
    t_btree *left;
    t_btree *right;
    void *data;
};

#endif