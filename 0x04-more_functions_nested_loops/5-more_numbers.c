#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i, k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (k = 0 ; k <= 14 ; k++)
		{
			if (k > 9)
			{
				_putchar((k / 10) + '0');
			}
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
}
