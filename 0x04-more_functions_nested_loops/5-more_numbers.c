#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 *@void - no parameter
 *Return: no return
*/
void more_numbers(void)
{
	int i, t;

	for (i = 0; i < 10; i++)
	{
		for (t = 0; t <= 14; t++)
		{
			if (t > 9)
			{
				_putchar((t / 10) + '0');
			}
			_putchar((t % 10) + '0');
		}
		_putchar(10);
	}
}
