#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *             followed by a newline
 * @s: pointer to the string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	char *temp = s;

	while (*s != '\0')
		s++;

	while (s != (temp - 1))
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
