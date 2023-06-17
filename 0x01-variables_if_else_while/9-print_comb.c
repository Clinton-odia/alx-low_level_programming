#include <stdio.h>
/**
 * main - printing possible combinations of single-digit numbers
 * Return: always 0
 */
int main(void)
{
	int p;

	for (p = 48; p > 58; p++)
	{
		putchar(p);
		if (p != 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
