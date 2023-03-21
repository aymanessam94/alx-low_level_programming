#include <stdio.h>

/**
 * main - Entry Point
 *
 * Dsecription: A program that assign last digit to n
 *
 * Return: A return is 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{

		if (ch != 'e' && ch != 'q')
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

