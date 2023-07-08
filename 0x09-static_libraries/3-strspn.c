#include "main.h"
/**
 * _strspn - Entry point
 * @accept: input
 * @s: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int m = 0;
int l;

while (*s)
{
for (l = 0; accept[l]; l++)
{
if (*s == accept[l])
{
m++;
break;
}
else if (accept[l + 1] == '\0')
return (m);
}
s++;
}
return (m);
}

