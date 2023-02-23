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

	if (n != 0 && n > 0)
	{
		for (i = 0; i < n; i++)
		_putchar('_');
	}
	_putchar('\n');
}

