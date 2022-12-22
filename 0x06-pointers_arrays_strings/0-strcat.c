/**
 * _strcat - concatenates two strings
 * @dest: string pointer
 * @src: string pointer
 *
 * Return: pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	char *pld = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	dest = pld;

	return (dest);
}
