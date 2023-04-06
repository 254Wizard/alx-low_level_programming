#include "main.h"

/**
 * set_bit - Function to set a bit to 1 at a specific index
 * @j: Pointer to decimal being passed in
 * @index: The binary position to be modified
 * Return: 1 if success, -1 if failed
 */
int set_bit(unsigned long int *j, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	*j = *j | mask;
	return (1);
}
