/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i++)

	{
		/* Check if the character is the first of a word */
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
				|| str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
				|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"'
				|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
				|| str[i - 1] == '}')
			str[i] = (str[i] >= 'a' && str[i] <= 'z') ? str[i] - 32 : str[i];
	}

	return (str);
}
