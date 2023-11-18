#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * loop - loop function
 * @a: number of arguments
 * @n: char
 * @env: enviroment
 * Return: void
 */

void loop(int a, char **n, char **env)
{
char *i = NULL, *b = NULL, *y;
int e, sum = 0;
const char *c = " \n";
(void)a;
(void)env;
while (1)
{
myprompt();
b = myline();
b[strcspn(b, "\n")] = '\0';
b = malloc(sizeof(char) * x);
if (b == NULL)
{
perror("Error: memory allocation\n");
}
strcpy(b, i);
y = strtok(i, c);
while (y != NULL)
{
sum++;
y = strtok(NULL, c);
}
sum++;
n = malloc(sizeof(char *) * sum);
y = strtok(b, c);
for (e = 0; y != NULL; e++)
{
n[e] = malloc(sizeof(char) * strlen(y));
strcpy(n[e], y);
y = strtok(NULL, c);
}
n[e] = NULL;
excu(n);
}
}
