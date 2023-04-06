#include "main.h"

/**
 * get_endianness - function that checks if endianness is big or small.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int j = 1;

	if ((j >> 31) == 1)
		return (0);
	else
		return (1);
}
