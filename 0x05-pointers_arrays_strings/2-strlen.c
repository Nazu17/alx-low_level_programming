#include "main.h"

/**
 * _strlen - checks length of string
 * @s: string to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
