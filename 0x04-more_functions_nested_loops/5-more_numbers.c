#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int bb;
	int ab;

	for (bb = 0 ; bb <= 9 ; bb++)
	{
		for (ab = 0 ; ab <= 14 ; ab++)
		{
			if (ab >= 10)
			{
				_putchar('1');
			}
			_putchar((ab % 10) + '0');
		}
		_putchar('\n');
}
