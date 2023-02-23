#include "main.h"

/**
 * print_square - prints a square followed by new line
 * character
 * @size: parameter to be checked with
 * Return: no return
*/
void print_square(int size)
{
	int i, s;

	if (size <= 0)
	_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
