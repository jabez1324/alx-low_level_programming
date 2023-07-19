#include "main.h"

/**
 * print_last_digit - Prints the lowercase letters of the alphabet
 *
 * @i: the character to check
 *
 * Description: This function prints the lowercase letters of the alphabet
 * to the console, separated by spaces.
 *
 * Return: This function does not return a value.
 */

int print_last_digit(int i)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
