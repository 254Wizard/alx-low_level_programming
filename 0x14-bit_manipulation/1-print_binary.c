#include "main.h"

/**
 * print_binary - Function to convert and print binary
 * @j: Decimal passed to be converted
 * Return: Null
 */
void print_binary(unsigned long int j)
{
	unsigned long int mask = 1;

	mask = mask << (sizeof(unsigned long int) * 8 - 1);

	while (mask != 0)
	{
		if ((j & mask) != 0)
			_putchar('1');
		else
			_putchar('0');

	mask = mask >> 1;
	}
}
