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
	int j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			int i1 = i / 10;
			int i2 = i % 10;
			int j1 = j / 10;
			int j2 = j % 10;

			putchar('0' + i1);
			putchar('0' + i2);
			putchar(' ');
			putchar('0' + j1);
			putchar('0' + j2);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
