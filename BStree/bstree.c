#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bstree.h"

// Allocate memory of type BStree node*, set the value to NULL, and return a pointer to the allocated memory
BStree bs_tree_ini(void)
{
    BStree tree = (BStree) malloc(sizeof(BStree_node*));
    *tree = NULL;
    return tree;
}


// helper function for insertion to create a pointer to a tree node from key and data
BStree_node *new_node(Key key, Data data) {
	BStree_node *node;
	node = (BStree_node *) malloc(sizeof(BStree_node));
	node->key = key;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

// Insert data with key into bst. If key is in bst, then do nothing
void bstree_insert(BStree bst, Key key, Data data) {
if (*bst == NULL) { // if the tree is empty, the method creates a new node at the root
	*bst = create_new_node(key, data);
}

else {
	int comparekey = key_comparison(key, (*bst)->key);
	if (0 > comparekey) { // If the key comparison value is less than 0, then traverse the left nodes
		bst_tree_insert(&(*bst)->left, key, data);
	}

	else if (0 < comparekey) { // If the key comparison value is more than 0, then traverse the right nodes
		bst_tree_insert(&(*bst)->right, key, data); 
	}
	else {
		printf("This node already exists in this tree. \n");

}

}

}
// If key is in bst, return key’s associated data. If key is not in bst, return NULL
Data bstree_search(BStree bst, Key key) {
	if (bst == NULL) {
		return NULL;
	}

	BStree_node root = *bst;
	int comparison = key_comp(root.key, key);
	
	if (comparison == 0) {
		return (&bst->data);
	}
	
	else if (comparison < 0) {
		if (root.right == NULL) {
			return NULL;
		}
		else 
			return bstree_search(&root->right, key);
	}

	else {
		if (root.left == NULL)
			return NULL;
		else	
			return bs_tree_search(&root->left, key);

	}
}
// In order traversal of bst and print each node’s key and data
void bstree_traversal(BStree bst) {
	if (bst != NULL) {
		if ((bst->left) != NULL) 
			bstree_traversal(bst->leftt);
		key_print(bst->key);
		data_print(bst->data);
		if ((bst->right) != NULL)
			bstree_traversal(bst->right);
	}

	else
		return;

}

// Free all the dynamically allocated memory of bst
// This method, and the following one, are taken from the lecture
static void btree_free(BStree_node *bt) { 
	if (bt == NULL) return; 
	else {
		btree_free(bt->left); 
		btree_free(bt->right);
		free(bt); 
	}
}

void bstree_free(BStree bst) {
	btree_free(*bst);
	free(bst);

}

