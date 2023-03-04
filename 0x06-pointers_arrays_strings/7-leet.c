/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	/* function code goes here */
	char *leetspeak = "aAeEoOtTlL44337711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetspeak[j] != '\0'; j += 2)
		{
			if (str[i] == leetspeak[j])
			{
				str[i] = leetspeak[j + 1];
				break;
			}
		}
	}
	return (str);
}
