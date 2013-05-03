/*
 * Fahrenheit to Celsius Homework (to be modified for lab 3 )
 *
 *  Created on: Feb 21, 2013
 *      Author: Caroline Willis
 */

#include <stdio.h>
/* Fucntion prototype for celsius_at_depth  */
double celsius_at_depth(int depth);
/* Function prototype for fahrenheit  */
double fahrenheit(double celsius);

int
main(void)
{
	int depth_entered; /* will be entered by user */
    double fahr_result; /* will come from fahrenheit function */
    double celsius_result; /* will come from celsius_at_depth function */

	/* get depth in km */
	printf("Enter the depth in as a whole number in kilometers> ");
	scanf("%d", &depth_entered);

	/* Calculate temperatures */

	celsius_result = celsius_at_depth(depth_entered);
	fahr_result = fahrenheit(celsius_result);

	/* Display the temps in C and F */

	printf("At that depth, the temperature is %6.2f degrees Celsius\n", celsius_result); 
    printf("and %6.2f degrees Fahrenheit.\n", fahr_result);

	return(0);
}

/* celsius_at_depth function */
double celsius_at_depth(int depth)
{
       double c; /* local variable */
       c = (10.0 * depth) + 20.0;
       return(c);
}

/* fahrenheit function */
double fahrenheit(double celsius)
{
       double f; /* local variable */
       f = (1.8 * celsius) + 32.0;
       return(f);
}

