#include "main.h"
/**
 * leet - encode into 1337
 * @k: input
 * Return: k value
 */
char *leet(char *k)
{
int m, n;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (m = 0; k[m] != '\0'; m++)
{
for (n = 0; n < 10; n++)
{
if (k[m] == s1[n])
{
k[m] = s2[n];
}
}
}
return (k);
}

