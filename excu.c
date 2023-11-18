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
int s;
pid_t pid = fork();
if (pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}
if (pid == 0)
{
if (execve(b[0], b, NULL) == -1)
{
perror("exec");
exit(EXIT_FAILURE);
}
}
else
{
if (wait(&s) == -1)
{
perror("wait");
exit(EXIT_FAILURE);
}
}
}
