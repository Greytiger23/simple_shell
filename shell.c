#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * main - entry point
 * @ac: number of arguments
 * @av: array of arguments
 * @e: char
 * Return: void
 */

int main(int ac, char **av, char **e)
{
if (ac == 1)
{
myprompt(av, e);
}
return (0);
}
