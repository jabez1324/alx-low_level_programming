#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
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
	char str = 'a';
	int num = 26;

	for (i = 0; i < num; i++)
	{
		if (str + i == 'e' || str + i == 'q')
		{
			continue;
		}
		putchar(str + i);
	}
	putchar('\n');

	return (0);
}
