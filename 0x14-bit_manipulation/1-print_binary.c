#include "main.h"

/**
 *_exp - A function that finds base exponent power
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of base exponent power
*/
unsigned long int _exp(unsigned int base, unsigned int power)
{
	unsigned long int exp;
	unsigned int i;

	exp = 1;
	for (i = 1; i <= power; i++)
		exp *= base;
	return (exp);
}

/**
 * print_binary - A function that prints a number in
 * binary notation
 * @n: number to print
 *
 * Return: return nothing
*/
void print_binary(unsigned long int n)
{
	char f = 0;
	unsigned long int exp, check;

	exp = _exp(2, sizeof(unsigned long int) * 8 - 1);
	while (exp != 0)
	{
		check = n & exp;
		if (check == exp)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || exp == 1)
			_putchar('0');
		exp >>= 1;
	}
}
