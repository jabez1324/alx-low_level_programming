#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * This function is the entry point program. It calls the puts function
 * to print a message to the standard output.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
        {
		 _putchar('a' + i);
	}
	_putchar('\n');
}
