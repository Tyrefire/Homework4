/*
 * =====================================================================================
 *
 *       Filename:  House_Tyrells_hw4_task2-3.c
 *       	Usage:  ./House_Tyrells_hw4_task2-3.c
 *    Description:  Average Score
 *
 *        Version:  1.0
 *        Created:  02/14/2017 03:34:42 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Daniel Tayler (), danieltayler@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */

/* Main Program */
int main(void)
{
	float score = 0;
	float avg = 0;

	for(int i = 1; i < 6; i++)
	{
		for(int j = 1; j < 4; j++)
		{
			printf("Enter the score for game #%d for player %d: ", j, i);
			scanf("%f", &score);
			avg += score;
		}
		printf("The average for bowler #%d is %f\n", i, avg/3);
		avg = 0;
	}

	return 0;
}


/* Function Defenitions */


