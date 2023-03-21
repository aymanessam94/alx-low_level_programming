#include <stdio.h>

/**
 * main - Entry Point
 *
 * Dsecription: A program that check alphabet in lowercase letter
 *
 * Return: A 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
