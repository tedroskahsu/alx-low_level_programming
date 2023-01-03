#include "main.h"

/**
 * _strspn - gets the length of a prefic substring
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Return - number of bytes in s consist only of by bytes
 *          from accpt
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
			accept++;
		}
		if (*accept == '\0')
		{
			break;
		}
		accept = ptr;
		s++;
	}

	return (count);
}
