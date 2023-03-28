#include <stdio.h>

/**
 * main - Entry Point
 *
 * Dsecription: A program that print a-z
 *
 * Return: A 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
