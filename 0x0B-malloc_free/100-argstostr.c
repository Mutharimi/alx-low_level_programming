#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
*/


char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
return (NULL);

int total_length = 0;
for (int i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}

char *result = (char *)malloc(sizeof(char) * total_length + 1);
if (result == NULL)
return (NULL);

int index = 0;
for (int i = 0; i < ac; i++)
{
int length = strlen(av[i]);
memcpy(result + index, av[i], length);
index += length;
result[index++] = '\n';
}
result[total_length] = '\0';

return (result);
}

