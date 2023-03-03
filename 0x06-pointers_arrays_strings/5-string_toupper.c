/*
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: Pointer to the string to modify
 *
 * Return: a pointer to the modified string.
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p = *p - ('a' - 'A');
		p++;
	}
	return (str);
}
