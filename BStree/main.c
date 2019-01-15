#include <stdio.h>
#include <string.h>
#include "matrix.h"

int main(void) {

	Matrix m = matrix_construction();

	
	int choice;
	printf("Choose 1 for input from stdin, or 2 to redirect from a file. \n");
	scanf("%d", &choice);

	if (choice == 1) {

		int numelements;
		char str1[200], str2[200];

		puts("Please enter the strings in the exact format enclosed in these quotes: 'ITEM1 ITEM2'");
		numelements = scanf(" %s %s", str1, str2);

		while (numelements == 2) {
			matrix_set(m, str1, str2, 1);
		}
		
		puts("       String1       String2       Occurrence");
		matrix_listing(m);
		matrix_destruction(m);

	}

	else if (choice == 2) {

		int numelements;
		char str1[200], str2[200], filename[200];
		
		puts("Please enter the filename of the file that contains keys.");
		scanf(" %s", filename);
		FILE *file = fopen(filename, "r");

		if (file == NULL) {
			printf("File does not exist. \n");
			exit(0);
		}

		numelements = fscanf(file, " %s %s", str1, str2);
		while (numelements == 2) {
			matrix_set(m, str1, str2, 1);
		}

		puts("       String1       String2       Occurrence");
                matrix_listing(m);
                matrix_destruction(m);
		fclose(file);

	}
		
	else 
		printf("Invalid choice! Good-bye. \n");
		exit(0);
} 	
