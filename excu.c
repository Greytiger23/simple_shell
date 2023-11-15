#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * excu - execute function
 * @b: char
 * Return: void
 */

void excu(char **b)
{
char *a = NULL;
if (b)
{
a = b[0];
if (execve(a, b, NULL) == -1)
{
perror("Error: there is no file\n");
exit(EXIT_FAILURE);
}
}
}
