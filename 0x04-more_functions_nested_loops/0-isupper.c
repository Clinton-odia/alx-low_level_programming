#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: integer alphabet
 * Return: return 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
