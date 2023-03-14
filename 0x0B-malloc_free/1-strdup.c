#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of
 *           the string str
 * @str: pointer to the string
 *
 * Return: NULL of str is NULL, on success return a pointer to the duplicated
 *         string. It returns NULL if insufficient memory was not available
*/
char *_strdup(char *str)
{
	int size = 0;
	char *ptr = str;
	char *ptrMalloc;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		size++;
		str++;
	}

	size++;
	str = ptr;

	ptrMalloc = malloc(sizeof(*ptrMalloc) * size);

	if (ptrMalloc == NULL)
		return (NULL);
	ptr = ptrMalloc;
	while (*str != '\0')
	{
		*ptrMalloc = *str;
		ptrMalloc++;
		str++;
	}
	ptrMalloc = ptr;
	return (ptrMalloc);

}
