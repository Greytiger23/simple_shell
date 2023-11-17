#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * excu - execute function
 * @b: char
 * @env: char
 * Return: void
 */

void excu(char **b, char **env)
{
char *a = NULL;
if (b)
{
a = b[0];
if (execve(a, b, env) == -1)
{
perror("Error: there is no file\n");
exit(EXIT_FAILURE);
}
}
}
