#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer of the string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	char *temp = str;
	int len = 0;
	int n = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str = temp;
	n = (len - 1) / 2;

	while (n < len)
	{
		n++;
		_putchar(*(str + n));
	}

	if (len % 2 != 0)
		_putchar(*(str + n));

	_putchar('\n');
}
