#include "main.h"

/**
*more_numbers - A function that prints 10 times the numbers, from 0 to 14
*
*Return: void
*/

void more_numbers(void)
{
	int ab, nb;

	for (ab = 1; ab <= 10; ab++)
	{
		for (nb = 0; nb <= 14; nb++)
		{
			if (nb >= 10)
			{
				_putchar('1');
			}

			_putchar(nb % 10 + '0');

		}

		_putchar('\n');

	}

}
