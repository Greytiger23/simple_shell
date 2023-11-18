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
while (x != NULL && ac < MAX_ARGS)
{
av[ac] = x;
x = strtok(NULL, " ");
ac++;
}
av[ac] = NULL;
return (av);
}
