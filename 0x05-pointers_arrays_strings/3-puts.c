#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str: pointer to the string
 * Return: string and new line
 */

void _puts(char *str)
{
	int i = 0;
	{
		while (str[i])
		{
			putchar(str[i]);
			i++;
		}
		putchar('\n');
	}
}
