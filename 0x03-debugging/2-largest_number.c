#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int result;

	if (a > b && a > c)
	{
		result = a;
	}
	else if (b > a && b > c)
	{
		result = b;
	}
	else
	{
		result = c;
	}
	return (result);

}
