#include "main.h"

/**
 * main - Entry point
 *
 * Return: Alway 0 (Success)
*/
int main(void)
{
	int i;
	char print_putchar[10] = "_putchar";

	for (i = 0; i <= 8; i++)
	{
		_putchar(print_putchar[i]);
	}
	_putchar(13);
	return (0);
}
