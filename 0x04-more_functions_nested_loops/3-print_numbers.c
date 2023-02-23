#include "main.h"

/**
* print_numbers - A function that prints the numbers from
* 0 to 9 followed by a new line
*@void: No parameter
* Return: no return
*/
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
