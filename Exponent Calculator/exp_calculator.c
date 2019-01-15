/* Name: exp_converter.c */
/* Purpose: Program that calculates values of exponential numbers. */
/* Author: Bridget Hart */ 

#include <stdio.h>

float power(float, int);

int main(void) /* main program that allows user to choose a float as the base value, and integer as the exponent value */
{

float base;
int exponent;

printf("Please enter a positive base value: \n");
scanf("%f",&base);

printf("Now, please enter an exponent value: \n");
scanf("%d",&exponent);

if (base < 0) { /* checks if the choice is positive and if not, program terminates */
	printf("The base you chose was negative and thus, invalid. \n");
}
else {
	printf("Result is: %f\n", power(base, exponent));
}
}

float power(float base, int exponent) /* helper program that uses the user's input choices to return the appropriate value */
{

float n;
if (exponent == 0) /* if the exponent integer chosen is 0, then the answer is always 1 */
	return 1;
if (exponent % 2 == 0) { /* if the exponent value is even then the answer is caluclated using the power function from the library; */ 
/* the exponent value is assigned to a float to provide a final float answer,*/
/* is divided by two then the answer is returned by multiplying n with itself */
	n = power(base, (float)exponent / 2);
	return n*n;
}
else 
	n = power(base, ((float)exponent - 1) / 2); /* if the exponent value is not even then the answer is calculated */
/*  using the built in power function, this time subtracting one from the exponent value */
/* then multiplying n with itself as well as the base value */
	return n*n*base;
}
