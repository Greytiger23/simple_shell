#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * myprompt - display the shell prompt
 * Return: void
 */

void myprompt(char **n, char **e)
{
char *a = NULL;
int s = 0;
ssize_t b;
size_t y = 0;
char *av[] = {NULL, NULL};
pid_t child_pid = fork();
(void)n;
while (1)
{
if (isatty(STDIN_FILENO))
{
mess("simple_shell$ ");
}
b = getline(&a, &y, stdin);
if (b == -1)
{
free(a);
exit(EXIT_FAILURE);
}
a[strcspn(a, "\n")] = '\0';
if (child_pid == -1)
{
free(a);
exit(EXIT_FAILURE);
}
if (child_pid == 0)
{
if (execve(av[0], av, e) == -1)
{
printf("%s: there is no such file\n", n[0]);
}
}
else
{
wait(&s);
}
}
}
