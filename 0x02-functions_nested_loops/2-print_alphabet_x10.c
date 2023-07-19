#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * This function is the entry point program. It calls the puts function
 * to print a message to the standard output.
 *
 * Return: Always 0 (Success)
 *.
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar('i' + j);
		}
		_putchar('\n');
	}
}

