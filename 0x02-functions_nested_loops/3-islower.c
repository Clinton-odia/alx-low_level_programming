#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: character been checked
 * Return: return 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
