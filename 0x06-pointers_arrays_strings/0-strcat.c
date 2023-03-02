/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	/* Find the length of dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Copy src to the end of dest */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Add a null terminator at the end */
	dest[dest_len + i] = '\0';

	return (dest);
}
