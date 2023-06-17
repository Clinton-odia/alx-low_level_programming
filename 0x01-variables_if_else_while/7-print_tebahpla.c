#include <stdio.h>
/**
 * main - making a program reverse a-z
 * Return: Always 0
 */
int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
