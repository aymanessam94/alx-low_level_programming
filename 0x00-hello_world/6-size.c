#include <stdio.h>

/**
 * main -Entry Point
 *
 * Description : A C program that know size types using sizeof()
 *
 * Return: A 0 returns (success)
 */

int main(void)
{
	char i;
	int j;
	long int k;
	long long int m;
	float f;

printf("Size of a char: %lu byte(s)\n", sizeof(i));
printf("Size of a int: %lu byte(s)\n", sizeof(j));
printf("Size of a long int: %lu byte(s)\n", sizeof(k));
printf("Size of a long long int: %lu byte(s)\n", sizeof(m));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
