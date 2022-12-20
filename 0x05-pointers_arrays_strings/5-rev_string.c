#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char *lastPt;

	while (*s != '\0')
		s++;

	lastPt = s - 1;
	printf("s pointer: %p\n", s);
	printf("last pointer: %p\n",  lastPt);
	printf("lastPt char is %c\n", *lastPt);

	s = lastPt;
	printf("s pointer: %p\n", s);
}
