#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_ARGS 10

/**
 * args - arguments function
 * @b: char array
 * Return: void
 */

char **args(char *b)
{
char **av = NULL;
char *x = strtok(b, " ");
int ac = 0;
while (x != NULL)
{
av[ac] = x;
ac++;
x = strtok(NULL, " ");
}
av[ac] = NULL;
return (av);
}
