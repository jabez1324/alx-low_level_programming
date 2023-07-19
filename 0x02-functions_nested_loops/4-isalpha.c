#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Prints the lowercase letters of the alphabet
 * @c: the character to check
 * Description: This function prints the lowercase letters of the alphabet
 * to the console, separated by spaces.
 *
 * Return: This function does not return a value.
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
