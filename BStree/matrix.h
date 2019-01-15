#ifndef MATRIX_H
#define MATRIX_H
#include "bstree.h"

typedef BStree Matrix;
typedef Sub_Key Index;

Matrix matrix_construction(void);
unsigned char matrix_isin(Matrix m, Index index1, Index index2) {
void matrix_set(Matrix m, Index index1, Index index2, Value value) {
void matrix_inc(Matrix m, Index index1, Index index2, Value value) {
void matrix_list(Matrix m) {
void matrix_destruction(Matrix m) {

#endif
