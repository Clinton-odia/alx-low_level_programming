#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
	o	*dest = *src;
	o	dest++;
	o	src++;
	o}
	*dest = '\0';
	return (s);
}
