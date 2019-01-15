#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bstree.h"
#include "datatype.h"
#include "matrix.h"

// Matrix construction using bstree ini()
Matrix matrix_construction(void) {
	
	Matrix m = (Matrix) bs_tree_ini();
	return m;


}

// If location (index1, index2) is defined in Matrix m, then return 1. Otherwise, return 0.
unsigned char matrix_isin(Matrix m, Index index1, Index index2) {

	Key key = key_gen(index1, index2);
		
	Value defined = bstree_search(m, key);

	if (defined == NULL) {
		return 0;
	}

	else
		return 1;


}

// Assign value to Matrix m at location (index1, index2). If that location already has value, then overwrite
void matrix_set(Matrix m, Index index1, Index index2, Value value) {

	Value *defined = matrix_isin(m, index1, index2);

	if (defined == 0) {
		Key key = key_gen(index 1, index 2);
		bstree_insert(m, key, value);
	}

	else 
		*matrix_isin(m, index1, index2) = value;


}

//If location (index1, index2) is defined in Matrix m, then increase the associated value by value. Otherwise, report error
void matrix_inc(Matrix m, Index index1, Index index2, Value value) {

	Value defined = matrix_isin(m, index1, index2);

	if (defined == 1) {
		*matrix_isin(m, index1, index2) = value;
	}

	else {
		printf("Error: This location is not defined in the Matrix. \n");
	}

}	

// Print indices and values in the Matrix m (with bstree traversal())
void matrix_list(Matrix m) {

	bs_tree_traversal(m);

}

// Free allocated space (with bstree free())
void matrix_destruction(Matrix m) {

	bs_tree_free(m);

}
