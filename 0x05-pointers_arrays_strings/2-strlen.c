#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: length of string
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s)
	{
		leng++;
		s++;
	}

	return (leng);
}
