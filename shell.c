#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - simple shell function
 * Return: void
 */

int main(void)
{
char *a, **b;
while (1)
{
myprompt();
a = myline();
b = args(a);
myexcu(b);
}
free(a);
free(b);
return (0);
}
