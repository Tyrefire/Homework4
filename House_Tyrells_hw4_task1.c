/*
 * =====================================================================================
 *
 *       Filename:  House_Tyrells_hw4_task1.c
 *       	Usage:  ./House_Tyrells_hw4_task1.c
 *    Description:  Deflection Assignment
 *
 *        Version:  1.0
 *        Created:  02/14/2017 06:48:37 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Tyler Madsen (), tylermadsen@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */

/* Main Program */
int main(void)
{
	double w, l, E, b, h, d, x, I;
	w = 200.0;
	l = 3.0;
	E = 187.2 * 1000000.0;
	b = 0.2;
	h = 0.3;
	I = (b*h*h*h)/12;
	x = 0.0;

	printf("Distance(ft)\tDeflection(in)\n");
	do
	{
		printf("%.8f\t%.8f\n", x, d);
		x += 0.5;
		d = (((w*x*x))/(24*E*I))*((x*x) + (6*l*l) - (4*l*x)) / 12;
	}
	while(x >= 0.0 && x <= 3.0);

	return 0;
}


/* Function Defenitions */


