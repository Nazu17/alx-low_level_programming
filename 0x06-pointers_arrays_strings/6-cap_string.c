#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: pointer to string.
 *
 * Return: pointer to the modified s.
 */

char *cap_string(char *s)
{
	int string_count;

/* scan through string */
	string_count = 0;
	while (s[string_count] != '\0')
	/* if next character after count is char, capitalise it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
	if (s[0] == ' ' || s[0] == '\t' || s[0] == '\n'
		|| s[0] == ',' || s[0] == ';' || s[0] == '.'
		|| s[0] == '.' || s[0] == '!' || s[0] == '?'
		|| s[0] == '"' || s[0] == '(' || s[0] == ')'
		|| s[0] == '(' || s[0] == ')')
	{
		if (s[string_count + 1] >= 97 && s[string_count + 1] <= 122)
		{
			s[string_count + 1] = s[string_count + 1] - 32;
		}
	}
		string_count++;
		return (s);
}
