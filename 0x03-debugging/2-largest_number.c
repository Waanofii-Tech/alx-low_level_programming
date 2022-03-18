#include "main.h"

/**
 * largest_number - returns the largest numbner from the 3 numbers
 * @a: the first integer
 * @b: the second integer
 * @c: the third integer
 * Return: largest number among them
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
