/*
 * mtk.c
 *
 *  Created on: Jan 23, 2013
 *      Author: Caroline
 */

/*
 * Converts distance in miles to kilometers
 */
#include <stdio.h>  /* printf, scanf definintions */
#define KMS_PER_MILE 1.609  /* conversion constant */

int
main(void)
{
	double miles, /* input - distance in miles. */
	       kms;   /* output - distance in kilometers */

	/* get distance */
	printf("Enter the distance in miles> ");
	scanf("%lf", &miles);

	/* Convert distane to km */

	kms = KMS_PER_MILE * miles;

	/* Display the distance in km */

	printf("That equals %f kilometers.\n", kms);

	return(0);
}
