/* Name: evaluate.c */
/* Purpose: A program to evaluate simple arithmetic expressions */
/* Author: Bridget Hart */

#include<stdio.h>
#include<stdlib.h>

float m_exp(float sub_exp, char op);
float s_exp(float sub_exp, char op);
char get_op();
float get_num();
float m_exp_result;

/* main program that allows user input of arithmetic expressions for as long as they would like to continue entering them */
int main(void) {
char cont = 'Y';
while (cont == 'Y' || cont == 'y')
{

printf("Enter a simple arithmetic expression: \n");
float result = s_exp(get_num(), get_op());

printf("The result is: %f\n", result);

printf("Would you like to continue? \n");
scanf("%c", &cont);

}
}

/* multiplies or divides the values attained from user input of the arithmetic expression */
float m_exp(float sub_exp, char op) {

if (op == '\n' || op == '+' || op == '-') {
        m_exp_result = sub_exp;
	return m_exp_result;
}
else if (op == '*') {
        m_exp_result = m_exp(sub_exp * get_num(), get_op());
	return m_exp_result;
}
else if (op == '/') {
        m_exp_result = m_exp(sub_exp / get_num(), get_op());
	return m_exp_result;
}

else
{
printf("Invalid operator. \n");
return 0;
}
}

/* uses the value generated from m_exp() and adds or subtracts values from user input of arithmetic expression */
float s_exp(float sub_exp, char op) {

if (op == '\n') {
	return sub_exp;
}
else if (op == '+') {
	m_exp_result = m_exp(get_num(), get_op());
	return s_exp(sub_exp + m_exp_result, get_op());
}
else if (op == '-') {
	m_exp_result = m_exp(get_num(), get_op());
	return s_exp(sub_exp - m_exp_result, get_op());
}

else
{
printf("Invalid operator. \n");
return 0;
}
}

/* returns the next operator in the expression */
char get_op() {
char op = ' ';
while (op == ' ')
	scanf("%c", &op);
return op;
}

/* returns the value of the next number in the expression */
float get_num()
{
float next_num;
scanf("%f", &next_num);
return next_num;
}

