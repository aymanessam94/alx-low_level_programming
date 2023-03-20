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
        int n, Last_digit;

        L_digit = n % 10;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
    	if (L_digit > 5)
                printf("Last digit of %d is %d and is greater than 5\n", n, L_digit)
        else if (L_digit == 0)
                printif("Last digit of %d is %d and is 0\n", n, L_digit)
        else if (L_digit < 6 && L_digit != 0)
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n,  L_digit)
        return (0);
}
