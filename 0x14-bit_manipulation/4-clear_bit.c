#include "main.h"

/**
 * clear_bit - Write a function that sets the value of a bit to 0
 * at a given index.
 * @n: a pointer to the bit.
 * @index: the index to set the value at - indices start at o.
 *
 * Return: if an error occurs - -1, otherwise - 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
