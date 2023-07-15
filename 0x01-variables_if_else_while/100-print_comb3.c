#include <stdio.h>

/**
 * main - Entry point
 *
 * This function is the entry point program. It calls the puts function
 * to print a message to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main() 
{
	int i, j;

	for (i = 0; i < 9; i++) 
	{
		for (j = i + 1; j <= 9; j++) 
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9) 
	           	{
				putchar(',');
				putchar(' ');							            }
		}		    
	}
	putchar('\n');
	return 0;
}
