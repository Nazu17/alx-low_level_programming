#include <stdio.h>
/**
 *	Main - A program that prints the alphabet in lowercase
 *	Return: 0 (Success)
 *	Description - Print the lowercase alphabet followed by a new line 
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
	putchar(lc);
	}
	putchar('\n');
	return (0);
}
