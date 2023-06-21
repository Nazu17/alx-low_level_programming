#include "main.h"

/**
 * Print alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
	_putchar(lc);
	}
	_putchar('\n');
}
