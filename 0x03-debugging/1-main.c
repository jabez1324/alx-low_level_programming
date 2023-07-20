#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	#if 0

		while (i < 10)
		{
			putchar(i);
	#endif

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
