#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * This function is the entry point program. It calls the puts function
 * to print a message to the standard output.
 *
 * Return: Always 0 (Success)
 * .
 */
int _islower(int c);

int main(void)
{
	_islower(int c);
	return (0);
}

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
		putchar('1');
	}	
	else
	{
		putchar('0');
	}
}
