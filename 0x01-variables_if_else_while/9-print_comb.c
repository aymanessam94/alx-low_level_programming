#include <stdio.h>

/**
 * main - Entry Point
 *
 * Dsecription: A program that prints combinations of single-digit numbers
 *
 * Return: A 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}	
