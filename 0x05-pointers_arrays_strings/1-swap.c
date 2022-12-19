#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
