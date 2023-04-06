#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @j: number to be searched
 * @index:bit index
 *
 * Return:bit value
 */
int get_bit(unsigned long int j, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (j >> index) & 1;

	return (bit_val);
}
