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

int main(int ac, char **av, char **env)
{
if (ac == 1)
{
loop(av, env);
}
printf("Exiting shell...\n");
return (0);
}

