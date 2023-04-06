#include "main.h"

/**
 * print_binary - Function to convert and print binary
 * @j: Decimal passed to be converted
 * Return: Null
 */
void print_binary(unsigned long int j)
{
	if (j >> 0)
	{
		if (j >> 1)
			print_binary(j >> 1);
		_putchar((j & 1) + '0');
	}
	else
		_putchar('0');
}
