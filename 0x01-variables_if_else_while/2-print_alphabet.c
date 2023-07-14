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
	char str = 'a';
	int num = 26;

	for(int i=0; i < 26; i++)
	{
		putchar(str + i);
	}

	putchar('\n');

	return (0);
}
