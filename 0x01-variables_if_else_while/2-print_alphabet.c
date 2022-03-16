#include <stdio.h>

/**
 * main - entry point
 * return: 0 on success
 */
int main(void)
{
	char start = 'a';

	while (start < 'z')
	{
		putchar(start);
		start++;
	}
	putchar('\n');

	return (0);
}
