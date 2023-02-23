#include "main.h"

/**
 *print_line - draw a straigh line in the terminal
 *@n: the parameter that checks the number of times
 *the character _ should be printed
 *Return: no return
*/
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		_putchar(10);

		_putchar(45);
	}
	_putchar(10);
}

