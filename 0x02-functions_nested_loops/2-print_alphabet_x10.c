#include <stdio.h>

/**
 * main - Entry point
 *
 * This function is the entry point program. It calls the puts function
 * to print a message to the standard output.
 *
 * Return: Always 0 (Success)
 *.
 */
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10(void);
	return (0);
}

/**
 * print_alphabet_x10 - Prints the lowercase letters of the alphabet
 *
 * Description: This function prints the lowercase letters of the alphabet
 * to the console, separated by spaces.
 *
 * Return: This function does not return a value.
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			putchar('i' + j);
		}
		putchar('\n');
	}
}

