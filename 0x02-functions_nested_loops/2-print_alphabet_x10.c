#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char l = 'a';

		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}

		_putchar('\n');
		i++;
	}
}
