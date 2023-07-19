#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - Prints the lowercase letters of the alphabet
 *
 * Description: This function prints the lowercase letters of the alphabet
 * to the console, separated by spaces.
 *
 * Return: This function does not return a value.
 */

int _islower(int c)
{
	if (islower(c))
	{
		return _putchar(1);
	}	
	else
	{
		return _putchar(0);
	}
}
