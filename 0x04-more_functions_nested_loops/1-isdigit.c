#include "main.h"

/**
 * _isdigit - check for a digit 0-9
 * @c: int to check
 *
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
