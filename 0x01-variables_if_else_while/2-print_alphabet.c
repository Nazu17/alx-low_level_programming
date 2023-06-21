#include <stdio.h>
/**
 *	Main - A program that prints the alphabet in lowercase
 *	Return: 0 (Success)
 *	Description - Print the lowercase alphabet followed by a new line 
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
