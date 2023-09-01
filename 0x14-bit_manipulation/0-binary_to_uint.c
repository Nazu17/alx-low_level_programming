#include "main.h"

/**
 * binary_to_uint - Write a function that converts a binary number
 * to an unsigned int.
 * @b: string containing the binary number.
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num << 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
