#include "main.h"

/**
 * size_of_str - return length of string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int size_of_str(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	return (size);
}

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int sizes1 = 0, sizes2 = 0;
	char *ptrs;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (s2);
	else if (s2 == NULL)
		return (s1);

	sizes1 = size_of_str(s1);
	sizes2 = size_of_str(s2);

	s = malloc(sizeof(*s) * (sizes1 + sizes2 + 1));

	if (s == NULL)
		return (NULL);
	ptrs = s;
	while (*s1 != '\0')
	{
		*s = *s1;
		s++;
		s1++;
	}

	while (*s2 != '\0')
	{
		*s = *s2;
		s++;
		s2++;
	}
	*s = '\0';
	s = ptrs;

	return (s);
}
