/**
 * _strcmp - copies a string
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: return
 */
int *_strcmp(char *s1, char *s2)
{
        if(*s1 > *s2)
	{
		return 1;
	}
	else return -1;
}
