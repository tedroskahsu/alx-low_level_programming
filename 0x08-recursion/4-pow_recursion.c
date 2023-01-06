#include "main.h"

/**
 * _pow_recursion - calculate power calculation
 * @x: base number
 * @y: power
 *
 * Return: power of a number x by y
 *         if y < 0 return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
