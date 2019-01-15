#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "datatype.h"

// Duplicate string pointed to by str with dynamic memory allocation
char * string_dup(char *str) {

	int length = strlen(str);
	char *newstring;
	newstring = malloc((sizeof(char))*(length+1));
	strcpy(newstring,str);
	return newstring;

}

// Generate a key with dynamic memory allocation
Key key_gen(char *skey1, char *skey2) {

	Key genkey = (Key_struct*)malloc(sizeof(Key_struct));
	genkey->skey1 = string_dup(skey1);
	genkey->skey2 = string_dup(skey2);
	return genkey;

}

// Use strcmp( ) to do comparison. If key1->skey1 and key2->skey1 are different, then
// they determine the comparison result. If key1->skey1 and key2->skey1 are the same,
// then key1->skey2 and key2->skey2 determine the comparison result
int key_comp(Key key1, Key key2) {

	int comparison = strcmp(key1->skey1, key2->skey1);
	if(comparison != 0) { // if the keys are not the same, then the comparison value is returned
		return comparison;
	}
	else { //if the keys are the same, then the comparison between the key2 values is computed and returned
		comparison = strcmp(key1->skey2, key2->skey2);
		return comparison;
	}
}	

// Print a key
void key_print(Key key) {

	printf("%s       %s", key->skey1, key->skey2);

}

// Free memory allocated for key
void key_free(Key key) {
// use for loops to free one by one
	
	int i;
	//for (i = 0; i < bst
	free(key);

}


// Generate a data with dynamic memory allocation
Data data_gen(int idata) {

	Data d = (int *)malloc(sizeof(Data));
	*d = idata;
	return d;

}

// Assign data with idata
void data_set(Data data, int idata) {

// put local one to global one

}

// Print a data
void data_print(Data data) {

	int d = (int)data;
	printf("      %d\n", d);

	// printf("%10d\n", data); might work
}

// Free memory allocated for data
void data_free(Data data) {

	free(data);

}




