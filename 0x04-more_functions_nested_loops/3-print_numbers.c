#include<stdio.h>

/**
 *print_numbers - print numbers between 0 and 9
 *Return: always 0
*/

void print_numbers(void)
{
	int ab;

	for (ab = 48 ; ab <= 57 ; ab++)
		putchar(ab);
	putchar('\n');
}
