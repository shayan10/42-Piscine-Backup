#ifndef FT_BTREE
#define FT_BTREE

typedef struct s_btree t_btree;

struct s_btree
{
    void *data;
    t_btree *left;
    t_btree *right;
};

#endif