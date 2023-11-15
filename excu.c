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

void excu(const char *b)
{
pid_t child_pid;
char *av[128];
int ac = 0;
char *d = strtok((char *)b, " ");
child_pid = fork();
if (child_pid == -1)
{
mess("Error forking\n");
exit(EXIT_FAILURE);
}
if (child_pid == 0)
{
while (d != NULL)
{
av[ac] = d;
d = strtok(NULL, " ");
ac++;
}
av[ac] = NULL;
if (execve(av[0], av, NULL) == -1)
{
mess("Error with command\n");
exit(EXIT_FAILURE);
}
}
else
{
wait(NULL);
}
}
