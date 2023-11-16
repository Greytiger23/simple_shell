#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * loop - loop function
 * Return: void
 */

void loop(void)
{
char i[128];
char **av;
while (1)
{
myprompt();
myline(i, sizeof(i));
av = args(i);
excu(av);
}
}
