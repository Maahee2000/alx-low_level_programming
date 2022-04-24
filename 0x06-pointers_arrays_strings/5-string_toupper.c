#include"main.h"

/**
 * string_toupper - changes lowercase to uppercase
 *
 *
 * @str: string to return.
 * Return: the string that change for uppercase
 */
char *string_toupper(char *str)
{
	int j;

	j = 0;

	for (j = 0; str[i] != '\0')
	{
		if (str[j] >= 97 && str[j] <= 122)
		{
			str[j] = str[j] - 32;
		}
		j++;
	}
	return (str);
}
