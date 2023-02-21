#include "main.h"

/**
* print_alphabet_x10 - Function that prints 10
* time the alphabet in lowercase followed by
* a new line.
* Return: no return
*/
void print_alphabet_x10(void)
{
	int i, t;

	for (t = 0; t <= 9; t++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
