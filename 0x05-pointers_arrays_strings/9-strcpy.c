/**
 * _strcpy - copies the string ponted by src to dest
 * @dest: destination string pointer
 * @src: source string pointer
 *
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	dest = temp;

	return (dest);
}
