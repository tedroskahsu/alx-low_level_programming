#include "main.h"

/**
 * _strpbrk - search a string from any set of bytes
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Return - pointer that matches bytes in accept, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		accept = ptr;
		s++;
	}

	return (NULL);
}
