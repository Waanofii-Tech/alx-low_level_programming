#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry point
 * Return: 0 on success
 */
/* betty style doc for function main goes there */
int main(void)
{
		int n;
		int d;

			srand(time(0));
			n = rand() - RAND_MAX / 2;
			/* your code goes there */
			d = n % 10;
			printf("Last digit of %i is ", n);
			printf("%i ",d);
			if (d > 5)
				printf("and is greater than 5");
			else if (d == 0)
				printf("and is 0");
			else if (d < 6)
				printf("and is less than 6 and not 0");

			return (0);
}
