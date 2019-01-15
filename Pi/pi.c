/* Name: pi.c */
/* Date: November 18, 2018 */
/* Author: Bridget Hart */

#include<stdio.h>
#include<math.h>

long double calculatePi(double);

int main(void)
{
long double precision, pi;
printf("Enter the desired value of precision: \n"); /* allows user input for any precision value */
scanf("%Lf", &precision);
pi = calculatePi(precision); /* call to the calculate function */
printf("The value of pi is: %Lf\n", pi);
}

long double calculatePi(double precision) /* method that calculates pi as a function of the sum of s series */
{

int i = 1;
long double pi = 0;
long double current = 1;

while (current >= precision) { /* while the current calculation is less than the requested precision */
pi = pi + (long double)pow(-1, ((long double)i+1.0)) * 4/(2*(long double)i-1.0);
current = 4 / (2*((long double)i + 1) - 1);
i++;

}

return pi;

}
