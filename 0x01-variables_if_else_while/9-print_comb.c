#include <stdio.h>
/**
 * main - printing possible combinations of single-digit numbers
 * Return: always 0
 */
int main(void)
{
	int numb = 0;

	while (numb <= 9)
	{
		putchar(numb + 48);

		if (numb != 9)
		{
			putchar(',');
			putchar(' ');
		}

		++numb;
	}
	putchar('\n');
	return (0);
}
