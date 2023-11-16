#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "shell.h"

/**
 * menv - prints the environment
 * @ac: number of arguments
 * @av: array of arguments
 * @env: enviroment variable
 * Return: void
 */

void menv(int ac, char **av, char **env)
{
unsigned int x = 0;
(void)ac;
(void)av;
while (env[x] != NULL)
{
print_env();
x++;
}
}
