#include "main.h"

/**
* _isdigit - Checks for a digit (0 through 9)
* @c: character to be checked
* Return: return 1 or 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);

	return (0);
}
