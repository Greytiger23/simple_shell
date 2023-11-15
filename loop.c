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
char i[128], *y, **av;
char *x = NULL, *b = NULL;
const char *c = " \n";
int sum = 0, e;
while (1)
{
myprompt();
myline(i, sizeof(i));
b = malloc(sizeof(i));
if (b == NULL)
{
perror(": memory allocation error");
}
strcpy(b, x);
y = strtok(x, c);
while (y != NULL)
{
sum++;
y = strtok(NULL, c);
}
sum++;
av = malloc(sizeof(char *) * sum);
y = strtok(b, c);
for (e = 0; y != NULL; e++)
{
av[e] = malloc(sizeof(char) * strlen(y));
strcpy(av[e], y);
y = strtok(NULL, c);
}
av[e] = NULL;
excu(av);
}
free(x);
free(b);
}
