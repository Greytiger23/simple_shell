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

char *myline(void)
{
char *b = NULL;
size_t x = 0;
if (getline(&b, &x, stdin) == -1)
{
if (feof(stdin))
{
exit(EXIT_SUCCESS);
}
else
{
perror("Error reading command\n");
exit(EXIT_FAILURE);
}
}
return (b);
}
