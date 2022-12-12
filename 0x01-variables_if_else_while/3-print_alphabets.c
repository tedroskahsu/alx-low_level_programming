#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	char sl = 'a';
	char ul = 'A';

	while (sl <= 'z')
	{
		putchar(sl);
		sl++;
	}
	while (ul <= 'Z')
	{
		putchar(ul);
		ul++;
	}
	putchar('\n');

	return (0);
}
