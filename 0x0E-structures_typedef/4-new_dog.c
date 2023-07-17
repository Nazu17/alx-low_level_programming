#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string.
 * @str: the string to be measured.
 *
 * Return: the length of the string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * _strcopy - copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest.
 * @dest: the buffer storing the string copy.
 * @src: the source string.
 *
 * Return: the pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name o the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bobby;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bobby = malloc(sizeof(dog_t));
	if (bobby == NULL)
		return (NULL);

	bobby->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bobby->name == NULL)
	{
		free(bobby);
		return (NULL);
	}

	bobby->name = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bobby->owner == NULL)
	{
		free(bobby->name);
		free(bobby);
		return (NULL);
	}

	bobby->name = _strcopy(bobby->name, name);
	bobby->age = age;
	bobby->owner = _strcopy(bobby->owner, owner);

	return (bobby);
}
