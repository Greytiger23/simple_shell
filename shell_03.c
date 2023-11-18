#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include "shell.h"

#define MAX_ARGS 10

/**
 * _fork - fork function
 * @av: char
 * Return: void
 */

void _fork(char *av[])
{
pid_t pid = fork();
int s;
if (pid == 0)
{
if (execve(av[0], av, NULL) == -1)
{
perror("Error executing command\n");
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
if (pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}
}

