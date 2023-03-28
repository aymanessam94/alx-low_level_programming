#include <stdio.h>

/**
 * main - Entry Point
 *
 * Dsecription: A program thatprints 0-9
 *
 * Return: A 0 (success)
 */

int main(void)
{
	char digit = (int)'a';

	while (digit <= 9)
	{
		putchar(digit + '0')
		digit++;
	}
	putchar('\n');
	return (0);
}

