#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with
 *                a specific char
 * @size: size of chars
 * @c: specific char to initialize with
 *
 * Return: NULL if size = 0. pointer to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr, *temp;

	if (size == 0)
		return (NULL);

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);

	temp = ptr;
	while (size > 0)
	{
		*ptr = c;
		ptr++;
		size--;
	}

	ptr = temp;
	return (ptr);
}
