#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 *
 */

void print_binary(unsigned long int n)
{
	int b, count = 0
	unsigned long int current;

	for (b = 89; b >= 0; b--)
	{
		current = n >> b;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
