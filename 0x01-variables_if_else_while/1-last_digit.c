#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Dsecription: A program that assign last digit to n
 *
 * Return: A 0 (success)
 */

int main(void)
{
	int n, ldigit;

	ldigit = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (ldigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ldigit);
	
	else if (ldigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, ldigit);
	
	else if (ldigit < 6 && ldigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	
	return (0);
}
