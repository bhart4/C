/* Name: converter.c */
/* Purpose: Allows users to choose to convert quantities in various units. */
/* Author: Bridget Hart */

#include <stdio.h>
int main(void)
{

char chooseConversion, chooseDirection;
float km, mile, metre, feet, cm, inch, celsius, fahr; 
int keepGoing = 1; /* variable used for the do ... while loop that allows the program to return to step 1 after each conversion */

do {

	printf("Please choose what you would like to convert: \n1 for kilometre and mile, \n2 for metre and feet, \n3 for centimetre and inch, \n4 for celsius and fahrenheit, \n5 to quit.\n");
	scanf("%c",&chooseConversion); /* asks the user what units they would like to choose for the conversion & allows them to input their choice */

	switch(chooseConversion) { /* switch statements allow for consideration of each possible user input as well as invalid input */
		case '1':
			printf("Choose K for kilometres to miles, or M for miles to kilometres.\n");
			scanf(" %c",&chooseDirection);
				if (chooseDirection=='K') {
					printf("Enter the distance in kilometres:\n");
					scanf("%f", &km);
					mile = (0.621371*km);
					printf("%f kilometres is %f miles.\n", km, mile);
					keepGoing = 1; /* keepGoing value remains 1 to ensure return to step 1, allowing user to choose conversion types again */
				}	
			
				else if (chooseDirection=='M') {
					printf("Enter the distance in miles:\n");
					scanf("%f", &mile);
					km = (1.60934*mile);
					printf("%f miles is %f kilometres.\n", mile, km);
					keepGoing = 1;
				}
			
				else
					printf("This is an invalid input.\n");
					keepGoing = 1;
			break;

		case '2':
			printf("Choose M for metres to feet, or F for feet to metres.\n");
			scanf(" %c",&chooseDirection);
				if (chooseDirection=='M') {
					printf("Enter the distance in metres:\n");
					scanf("%f", &metre);
					feet = (0.3048*metre);
					printf("%f metres is %f feet.\n", metre, feet);
					keepGoing = 1;
				}

				else if (chooseDirection=='F') {
					printf("Enter the distance in feet:\n");
                                	scanf("%f", &feet);
                                	metre = (3.28084*feet);
                                	printf("%f feet is %f metres.\n", feet, metre);
                                	keepGoing = 1;
				} 
		
				else
					printf("This is an invalid input.\n");
					keepGoing = 1;	
			break;

		case '3':
			printf("Choose C for centimetres to inches, or I for inches to centimetres.\n");
                	scanf(" %c",&chooseDirection);
                	        if (chooseDirection=='C') {
                        	        printf("Enter the distance in centimetres:\n");
                                	scanf("%f", &cm);
                                	inch = (2.54*cm);
                                	printf("%f centimetres is %f inches.\n", cm, inch);
                                	keepGoing = 1;
				}

 	                       else if (chooseDirection=='I') {
         	                      	printf("Enter the distance in inches:\n");
             				scanf("%f", &inch);
                        		cm = (0.393701*inch);
                                	printf("%f inches is %f centimetres.\n", inch, cm);
                                	keepGoing = 1;
				}
                        	else
                                	printf("This is an invalid input.\n");
                                	keepGoing = 1;
                
			break;

		case '4':
			printf("Choose C for celsius to fahrenheit, or F for fahrenheit to celsius.\n");
                	scanf(" %c",&chooseDirection);
                	        if (chooseDirection=='C') {
                	                printf("Enter the temperature in degrees celsius:\n");
                	                scanf("%f", &celsius);
                	                fahr = (9.0 / 5.0) * celsius + 32.0; 
                	                printf("%f degrees celsius is %f degrees fahrenheit.\n", celsius, fahr);
                                	keepGoing = 1;
				}

	                        else if (chooseDirection=='F') {
        	                        printf("Enter the temperature in degrees fahrenheit:\n");
                	                scanf("%f", &fahr);
                        	        celsius = (5.0 / 9.0) * (fahr - 32.0);
                                	printf("%f degrees fahrenheit is %f degrees celsius.\n", fahr, celsius);
                               		keepGoing = 1;
				}
                        	else
                                	printf("This is an invalid input.\n");
                                	keepGoing = 1;
                	break;
	
		case '5':
			printf("Good-bye!\n");
			keepGoing = 0; /* This option means the user wishes to quit the program, so this is the only time keepGoing is changed to 0 to cause termination of the program */
			break;
		
		default: printf("This is not a valid choice, try again!\n");
			keepGoing = 1;
			break;

	}

}
while (keepGoing==1); /* Each case, except for the choice of 5 which terminates the program, assigns keepGoing to 1 to ensure return to step 1. */

}
