#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size fo a char: %ld byte(s)\n", sizeof(c));
	printf("Size fo a int: %ld byte(s)\n", sizeof(i));
	printf("Size fo a long int: %ld byte(s)\n", sizeof(li));
	printf("Size fo a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size fo a float: %ld byte(s)\n", sizeof(f));

	return (0);
}
