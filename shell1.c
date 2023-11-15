#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * main - simple shell function
 * Return: void
 */

int shell(void)
{
char a[120];
while (1)
{
myprompt();
myline(a, sizeof(a));
excu(a);
}
return (0);
}
