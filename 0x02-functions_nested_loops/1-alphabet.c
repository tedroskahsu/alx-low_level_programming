#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}

	_putchar('\n');
}
