#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* Main - print if a number is positive, zero or negative. 
* Description: using the main function.
* This program print an output and store it in a variable n.
* Return: 0
*/
int main(void)		// No argument should be sent
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
