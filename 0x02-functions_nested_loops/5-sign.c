#include <unistd.h>
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
		return (1);                                                                
		_putchar('+');                                          
	}                                                                         
	else if (n = 0)                
	{                                                                             
		return (0);
		_putchar('0');                                                             
	}
	else if(n < 0)                        
	{  
		return (-1);
		-putchar('-');
	}