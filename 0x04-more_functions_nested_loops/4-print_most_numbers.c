#include "main.h"

/**
* print_most_numbers - A function that prints the numbers
* from 0 to 9 followed by a new line, omit 2 and 4
*@void: No parameter
* Return: no return
*/
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		continue;

		_putchar(i);
	}
	_putchar(10);
}
