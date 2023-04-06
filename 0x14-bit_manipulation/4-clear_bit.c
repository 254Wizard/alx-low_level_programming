#include "main.h"

/**
 * clear_bit - Function to set a bit to 0 at a specific index
 * @j:number to be searched
 * @index: the input index
 * Return: 1 if success, -1 if failed
 */
int clear_bit(unsigned long int *j, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	mask = ~mask;
	*j = *j & mask;
	return (1);
}
