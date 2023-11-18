#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "shell.h"

#define MAX_INPUT_SIZE 1024

/**
 * main - entry point
 * @ac: number of argu
 * @av: array of argu
 * @env: envi
 * Return: void
 */

int m(int ac, char **av, char **env)
{
char *a;
(void)ac;
(void)env;
while (1)
{
myprompt();
a = myline();
av = args(a);
excu(av);
}
free(a);
return (0);
}

