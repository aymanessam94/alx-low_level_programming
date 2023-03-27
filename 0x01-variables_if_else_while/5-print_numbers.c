#include <stdio.h>

/**
 * main - Entry Point
 *
 * Dsecription: A program that print all digit single numbers
 *
 * Return: A 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
