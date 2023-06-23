#include "main.h"

/**
 * _isdigit - Checks for digit
 * @c:The character to be checked
 * Return: 1 for digit character or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
