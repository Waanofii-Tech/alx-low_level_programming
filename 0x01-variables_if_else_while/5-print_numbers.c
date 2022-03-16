#include <stdio.h>

/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
