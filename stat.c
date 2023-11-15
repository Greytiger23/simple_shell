#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "shell.h"

/**
 * _stat - status function
 * @ac: number of arguments
 * @av: array of arguments
 * Return: void
 */

void _stat(int ac, char **av)
{
unsigned int a;
struct stat b;
if (ac < 2)
{
printf("Usage: %s ...\n", av[0]);
}
a = 1;
while (av[a])
{
printf("%s", av[a]);
if (stat(av[1], &b) == 0)
{
printf("found\n");
}
else
{
printf("not found\n");
}
a++;
}
}
