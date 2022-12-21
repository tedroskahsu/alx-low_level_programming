#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of integers to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if ((i + 1) != n)
		{
			printf(",");
			printf(" ");
		}
	}

	printf("\n");
}
