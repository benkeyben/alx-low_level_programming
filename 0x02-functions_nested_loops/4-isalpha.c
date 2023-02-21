#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic
 * characters
 * @c: a character to be checked
 * Return: return 1 or 0
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	return (1);

	return (0);
}
