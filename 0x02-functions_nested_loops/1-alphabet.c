#include "main.h"

/**
 * print_alphabet - Function that print alphabet
 * in lowercase
 * Return: no return
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
