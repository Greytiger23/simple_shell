#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include "shell.h"

#define MAX_ARGS 10

/**
 * main - entry point
 * Return: void
 */

int main(void)
{
char *b;
size_t x;
int s = 0;
char *av[MAX_ARGS];
pid_t child_pid = fork();
while (1)
{
myprompt();
if (getline(&b, &x, stdin) == -1)
{
printf("Exiting shell.\n");
break;
}
b[strlen(b) - 1] = '\0';
if (child_pid == -1)
{
perror("fork");
}
if (child_pid == 0)
{
if (execve(av[s], av, NULL) == -1)
{
perror("Error executing command");
exit(EXIT_FAILURE);
s++;
}
}
}
printf("Exiting shell\n");
return (0);
}

