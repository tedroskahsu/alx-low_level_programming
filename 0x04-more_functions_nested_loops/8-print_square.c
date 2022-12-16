#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int i = size;
	int hold_size = size;

	do {
		while (size > 0)
		{
			_putchar('#');
			size--;
		}
		_putchar('\n');
		size = hold_size;
		i--;
	} while (i > 0);
}
