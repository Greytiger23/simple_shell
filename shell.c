#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "shell.h"

#define MAX_INPUT_SIZE 1024

/**
 * main - entry point
 * Return: void
 */

int main(void)
{
char i[MAX_INPUT_SIZE];
char **av;
while (1)
{
myprompt();
myline(i, sizeof(i));
av = args(i);
excu(av);
}
printf("Exiting shell...\n");
return (0);
}

