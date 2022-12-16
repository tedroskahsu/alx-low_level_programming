#include "main.h"

/**
 * more_numbers - prints 10 times 0-14
 *
 * Return: nothing
 */
void more_numbers(void)
{
	char n = '0';
	char l = '0';

	while (l <= '9')
	{
		while (n <= '9')
		{
			_putchar(n);
			n++;
		}
		n = '0';
		_putchar('\n');

		l++;
	}
}
