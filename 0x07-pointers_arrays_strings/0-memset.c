#include "main.h"

/**
 * _memset - fills memory witha a constant byte
 * @s: string pointer
 * @b: constant byte
 * @n: number of n bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	s = ptr;

	return (s);
}
