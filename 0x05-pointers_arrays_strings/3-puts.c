#include "main.h"
/**
 *_puts - prints a string followed by a new line to stdout
 * @str: string to print
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}
