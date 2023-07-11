#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - returns to newly allocated space
 * @str: char
 * Return: 0, NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *b;
	int i, k = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	b = malloc(sizeof(char) * (i + 1));

	if (b == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		b[k] = str[k];

	return (b);
}
