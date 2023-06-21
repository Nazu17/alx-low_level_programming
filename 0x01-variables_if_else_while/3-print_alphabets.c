#include <stdio.h>
/** Main - Alphabet Printing Challenge: Lowercase, Uppercase, and New Line
 * Description - Challenge of printing the alphabet in lowercase, followed by uppercase, and ending with a new line
 * Return: 0 (Success)
 */

int main()
{
    char ch;

	printf("Uc characters:\n");
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	printf("%c ", ch);
	}
	printf("\nLc characters:\n");
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	printf("%c ", ch);
	}

	return 0;
}
