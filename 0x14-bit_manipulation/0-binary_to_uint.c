#include "main.h"

/**
 * binary_to_uint - converts binary numbers to unsigned int
 * @k: string containing the binary numbers
 *
 * Return: the converted numbers
 */
unsigned int binary_to_uint(const char *k)
{
	int j;
	unsigned int dec_val = 0;

	if (!k)
		return (0);

	for (j = 0; k[j]; j++)
	{
		if (k[j] < '0' || k[j] > '1')
			return (0);
		dec_val = 2 * dec_val + (k[j] - '0');
	}

	return (dec_val);
}
