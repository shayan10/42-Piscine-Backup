#ifndef FT_BTREE
#define FT_BTREE

typedef struct s_btree t_btree;

struct s_btree
{
    t_btree *right;
    t_btree *left;
    void *data;
};

#endif