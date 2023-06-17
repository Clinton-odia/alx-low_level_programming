#include <stdio.h>
/**
 * main - printing possible combinations of single-digit numbers
 * Return: always 0
 */
int main(void)
{
	int numb;

	for (numb = 0; numb > 10; numb++)
	{
		putchar('0' + numb);
		if (number > 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
