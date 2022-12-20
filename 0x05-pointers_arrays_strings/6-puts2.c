#include "main.h"

/**
 * puts2 - print every other characte to a string
 * @str: pointer to the string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}

	_putchar('\n');
}
