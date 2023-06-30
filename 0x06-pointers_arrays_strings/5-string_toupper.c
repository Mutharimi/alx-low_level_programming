#include "main.h"
/**
 * string_toupper - convert all lowercase to uppercase
 * @m: pointer
 *
 * Return: m
 */
char *string_toupper(char *m)
{
int k;
k = 0;
while (m[k] != '\0')
{
if (m[k] >= 'a' && m[k] <= 'z')
m[k] = m[k] - 32;
k++;
}
return (m);
}



