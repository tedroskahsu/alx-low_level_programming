#include "main.h"

/**
 * print_line - print straight line
 * @n: number of times print
 *
 * Return: nothing
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
