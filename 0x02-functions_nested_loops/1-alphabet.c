#include "main.h"

/**
 * main - Check the code
 *
 * Function print_alphabet - Function that print alphabet
 * in lowercase letters
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	print_alphabet();
	_putchar(10);
	return (0);
}

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
}
