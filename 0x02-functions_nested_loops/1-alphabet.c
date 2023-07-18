#include "main.h"

/**
 * main - Entry point
 *
 * This function is the entry point program. It calls the puts function
 * to print a message to the standard output.
 *
 * Return: Always 0 (Success)
 *.
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
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
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}
}
