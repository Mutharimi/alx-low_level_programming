#include "main.h"

/**
 * cap_string - Capitalize  string wors
 * @str: The string to be capitalized
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (str[i] == ' ' ||
		    str[i] == '\t' ||
		    str[i] == '\n' ||
		    str[i] == ',' ||
		    str[i] == ';' ||
		    str[i] == '.' ||
		    str[i] == '!' ||
		    str[i] == '?' ||
		    str[i] == '"' ||
		    str[i] == '(' ||
		    str[i] == ')' ||
		    str[i] == '{' ||
		    str[i] == '}' ||
		    i == 0)
			str[i] -= 32;

		i++;
	}

	return (str);
}

