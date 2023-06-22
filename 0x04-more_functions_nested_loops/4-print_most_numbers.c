#include<stdio.h>

/**
 *print_most_numbers - print numbers expect 2 & 4
 *Return: void
*/

void print_most_numbers(void)
{
	int ab;

	for (ab = 48 ; ab <= 57 ; ab++)
	{
		if (ab == 50 || ab == 52)
			continue;
		putchar(ab);
	}
	putchar('\n');
}
