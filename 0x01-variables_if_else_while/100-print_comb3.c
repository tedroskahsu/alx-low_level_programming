#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: nothing
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n);
		putchar(',');
		n++;
	}
	putchar('\n');

	return (0);
}
