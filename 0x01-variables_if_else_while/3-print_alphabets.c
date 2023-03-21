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
	char ch = 'a';
	char ch1 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
		putchar('\n');

	while (ch1 <= 'Z')
	{
		putchar(ch1);
		ch1++;
	}

	return (0);

}
