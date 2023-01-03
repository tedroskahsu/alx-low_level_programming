#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character
 *
 * Return: pointer to first occurence of c or NULL else
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
