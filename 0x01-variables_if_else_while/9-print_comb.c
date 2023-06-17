#include <stdio.h>
/**
 * main - printing possible combinations of single-digit numbers
 * Return: always 0
 */
int main(void)
{
	int number;

	for (number = 0; number > 10; number++)
	{
		putchar('0' + number);
		if (number > 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
