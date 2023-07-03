#include "main.h"
/**
 * _memcpy- copies memory area
 *@dest: storage
 *@src: where it is copied
 *@n: number of bytes
 *
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int m = 0;
int j = n;

for (; m < j; m++)
{
dest[m] = src[m];
n--;
}
return (dest);
}

