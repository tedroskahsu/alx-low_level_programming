#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: the character
 *
 * Description: This function checks if c is lowercase
 * letter if true returns 1 else returns 0
 *
 * Return: 1 if c is lowercase else 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
