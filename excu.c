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
child_pid = fork();
if (child_pid == -1)
{
perror("Error:");
exit(EXIT_FAILURE);
}
if (child_pid == 0)
{
execlp(b, b, (char *)NULL);
perror("execlp");
exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}
