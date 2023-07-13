#include <stdlib.h>
		
#include "main.h"



/**
 * *malloc_checked - to allocate memory
 *@b: bytes to be allocated
 * Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

