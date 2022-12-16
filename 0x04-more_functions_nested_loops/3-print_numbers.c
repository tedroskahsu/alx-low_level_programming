#include "main.h"

/**
 * print_numbers - prints the numbers 0-9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	char n = '0';
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
