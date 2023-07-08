#include "main.h"
/**
 * _strlen - returns string length
 * @s: string
 * Return: longth
 */
int _strlen(char *s)
{
int longth = 0;

while (*s != '\0')
{
longth++;
s++;
}

return (longth);
}

