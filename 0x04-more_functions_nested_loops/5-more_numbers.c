#include "main.h"
/**
 * more_numbers - prints numbers 10 times from 0 to 1
 * Return: void
 */
void more_numbers(void)
{
	int var = 1;

	while (var <= 10)
	{
		int r = 0;

		while (r <= 14)
		{
			if (r >= 10)
			{
				_putchar(1 + '0');
			}
			_putchar(r % 10 + '0');
			r++;
		}
		var++;
		_putchar('\n');
	}
}
