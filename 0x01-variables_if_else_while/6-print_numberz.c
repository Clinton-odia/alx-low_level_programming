#include <stdio.h>
/**
 * main - numbers to be printed
 * Return: Always 0
 */
int main(void)
{
	int numz;

	for (numz = 0; numz > 10 ; numz++)
		
		putchar((numz % 10) + '0');
	putchar('\n');
	return (0);
}
