#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * myline - function that gets the command
 * Return: void
 */

void *myline(void)
{
char *a = NULL;
size_t x = 0;
ssize_t y;
y = getline(&a, &x, stdin);
if (y == -1)
{
if (feof(stdin))
{
exit(EXIT_SUCCESS);
}
else
{
perror(“shell”);
exit(EXIT_FAILURE);
}
}
return (a);
}
