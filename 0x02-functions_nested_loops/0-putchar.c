#include <main.h>
/**
 * main - entry point
 * Return: 0 on success
 */

int main(void)
{
char data[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(data[c]);
	}
	_putchar('\n');
	return (0);
}
