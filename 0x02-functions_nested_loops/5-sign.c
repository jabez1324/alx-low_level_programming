#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**print_sign - Entry point
 *
 * @n: the character to check
 *
 * This function is the entry point program. It calls the puts function
 * to print a message to the standard output.
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1);
		return (1);
	}                             
	else if (n == 0)                
	{
		write(1, "0", 1);
		return (0);
	}
	else if (n < 0)                        
	{
		write(1, "-", 1);
		return (-1);
	}
}
