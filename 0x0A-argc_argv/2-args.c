#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments received
 * @argc: arguments count
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
for (int j = 0; j < argc; j++)
{
printf("%s\n", argv[j]);
}
return (0);
}

