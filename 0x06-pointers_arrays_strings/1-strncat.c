/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Find the length of dest string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append up to n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Add null terminator to the end of the resulting string */
	dest[dest_len + i] = '\0';

	/* Return the resulting string */
	return (dest);
}
