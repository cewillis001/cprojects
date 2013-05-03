/*
 * Fahrenheit to Celsius Homework (to be modified for lab 3 )
 *
 *  Created on: Feb 21, 2013
 *      Author: Caroline Willis
 */

#include <stdio.h>
/* Fucntion prototype for celsius_at_depth  */
double celsius_at_depth(double depth);
/* Function prototype for fahrenheit  */
double fahrenheit(double celsius);

int
main(void)
{
	double fahrenheit; /* input - temp in degrees F */
    double celsius; /* output - temp in degrees C */

	/* get temp in F */
	/*printf("Enter the temperature in degrees Fahrenheit> "); */
	scanf("%d", &fahrenheit);

	/* Convert temp to C */

	fahrenheit = (1.8) * (celsius) + 32;

	/* Display the temp in C */

	printf("That equals %4.2f degrees Celsius.\n", celsius);

	return(0);
}
