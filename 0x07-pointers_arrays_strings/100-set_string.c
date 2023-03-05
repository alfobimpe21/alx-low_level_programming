#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to string
 * @to: pointer to string
 *
 * Return: nothing
 */
void set_string(char **s, char *to);
	/* code */
int main(void)
{
	char **s = "Hello";
	char *to = "world!";

	printf("Before: str1 = %s, str2 = %s\n", str1, str2);
	set_string(&s, to);
	printf("After: str1 = %s, str2 = %s\n", str1, str2);

	return (0);
}
