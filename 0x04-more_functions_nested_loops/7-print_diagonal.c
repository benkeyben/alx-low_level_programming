#include "main.h"

/**
 *print_diagonal - draw a straigh line in the terminal
 *@n: the parameter that checks the number of times
 *the character _ should be printed
 *Return: no return
*/
void print_diagonal(int n)
{
	int i, d;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		for (d = 0; d <= i; d++)
		{
			if (i == (n - 1))
				break;

			_putchar(' ');
		}
	}
}
