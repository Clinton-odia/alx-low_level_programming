#include "main.h"
/**
 * _isalpha -  checks for alphabetic character.
 * @c: character been checked
 * Return: return 1 if an alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
