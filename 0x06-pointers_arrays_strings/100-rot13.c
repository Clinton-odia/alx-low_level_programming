#include "main.h"
#include <stdio.h>

/**
 * rot13 -  encodes a string using rot13.
 * @s: pointer to string
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datart[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = datart[j];
				break;
			}
		}
	}
	return (s);
}
