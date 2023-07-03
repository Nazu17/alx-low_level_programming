#include "main.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @s: the string to be searched.
 * @c: the character to be located.
 *
 * Return: if c is found - a pointer to the first occurence.
 * If c is not found - 0
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
