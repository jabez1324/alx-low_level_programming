#include <stdio.h>

/**
 * main - Entry point
 *
 * This function is the entry point program. It calls the `puts` function
 * to print a message to the standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *wow = "and that piece of art is useful\"";

	fprintf(stderr, "%s - Dora Korpar, 2015-10-19\n", wow);
	return (1);
}
