#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%i", n);
	if (n < 0)
		printf(" is negative\n");
	else if (n > 0)
		printf(" is positive\n");
	else
		printf(" is zero\n");

	return (0);
}
