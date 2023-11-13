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

int main(void)
{
char a[120];
while (1)
{
myprompt();
myline(a, sizeof(a));
if (strcmp(a, "exit") == 0)
{
mess("Exiting shell.\n");
break;
}
if (strcmp(a, "env") == 0)
{
print_env();
continue;
}
excu(a);
}
return (0);
}
