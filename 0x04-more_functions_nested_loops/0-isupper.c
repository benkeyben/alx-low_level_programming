#include "main.h"

/**
 * _isupper - A function that checks for uppercase
 * characters
 *@c: Character to be checked
 * Return: return 1 or 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

	return (0);
}
