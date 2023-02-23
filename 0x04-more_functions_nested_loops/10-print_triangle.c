#include "main.h"

/**
 * print_triangle - A function that print a triangle
 * followed by a new line
 *@size: parameter to be checked
 *Return: no return
*/
void print_triangle(int size)
{
	int i, s;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for ((s = size - i); s > 0; s--)
				_putchar(' ');
			for (s = 0; s < i; s++)
				_putchar('#');
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
