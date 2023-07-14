#include <stdio.h>

/**
 * main - Entry point
 *
 * This function is the entry point program. It calls the puts function
 * to print a message to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char str1 = 'a';
	char str2 = 'A';
	int num = 26;

	for (i = 0; i < num; i++)
	{
		putchar(str1 + num);
		putchar(str2 + num);
	}
	putchar('\n');

	return (0);
}
