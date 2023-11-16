#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * loop - loop function
 * @av: char
 * @env: enviroment
 * Return: void
 */

void loop(char **av, char **env)
{
char *i = NULL;
int d;
while (1)
{
myprompt();
myline(i, sizeof(i));
av = args(i);
child_pid = fork();
if (child_pid == -1)
{
free(i);
exit(EXIT_FAILURE);
}
if (child_pid == 0)
{
excu(av);
}
else
{
wait(&d);
}
}
}
