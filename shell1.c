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
char *b, *av[MAX_ARGS], *y;
int a = 0;
size_t x;
while (1)
{
myprompt();
if (getline(&b, &x, stdin) == -1)
{
printf("Exiting shell.\n");
break;
}
b[strlen(b) - 1] = '\0';
y = strtok(b, " ");
while (y != NULL && a < MAX_ARGS)
{
av[a] = y;
y = strtok(NULL, " ");
a++;
}
av[a] = NULL;
excu(av);
}
return (0);
}

