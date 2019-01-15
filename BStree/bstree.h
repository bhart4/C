#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "datatype.h"

struct BStree_node {
    Key key;
    Data data;
    struct BStree_node *left, *right;
};
typedef struct BStree_node BStree_node;
typedef BStree_node** BStree;

BStree bstree_ini(void);
BStree_node *new_node(Key key, Data data);
void bstree_insert(BStree bst, Key key, Data data);
Data bstree_search(BStree bst, Key key);
void bstree_traversal(BStree bst);
void bstree_free(BStree bst);
