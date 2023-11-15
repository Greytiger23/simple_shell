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
int s;
char *av[] = {NULL, NULL};
child_pid = fork();
if (child_pid == -1)
{
exit(EXIT_FAILURE);
}
if (child_pid == 0)
{
if (execve(av[0], av, NULL) == -1)
{
printf("%s: there is no file\n", b);
exit(EXIT_FAILURE);
}
}
else
{
wait(&s);
}
}
