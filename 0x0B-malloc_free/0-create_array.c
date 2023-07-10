#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: array size
 * @c: char
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
char *str;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (unsigned int i = 0; i < size; i++)
str[i] = c;
return (str);
}



