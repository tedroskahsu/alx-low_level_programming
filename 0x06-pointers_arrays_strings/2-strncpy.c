/**
 * _strncpy - copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes from src
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*dest != '\0' && *src != '\0'  && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	dest = p;

	return (dest);
}
