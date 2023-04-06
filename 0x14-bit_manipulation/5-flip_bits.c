#include "main.h"

/**
 * flip_bits - Function to determine the minimum number of
 * bits to be changed
 * @j: The value to be modified
 * @k: The value to be modified
 * Return: The number of bits
 */
unsigned int flip_bits(unsigned long int j, unsigned long int k)
{
	unsigned int bits_num;

	for (bits_num = 0; j || k; j >>= 1, k >>= 1)
	{
		if ((j & 1) != (k & 1))
			bits_num++;
	}

	return (bits_num);
}
