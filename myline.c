#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * myline - function that gets the command
 * @b: char
 * @x: size of char
 * Return: void
 */

void myline(char *b, size_t x)
{
if (getline(&b, &x, stdin) == -1)
{
if (feof(stdin))
{
mess("\n");
exit(EXIT_SUCCESS);
}
else
{
mess("Error reading command\n");
exit(EXIT_FAILURE);
}
}
b[strcspn(b, "\n")] = '\0';
}
