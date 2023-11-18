#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include "shell.h"

/**
 * myexit - exit function
 * @b: char
 * Return: void
 */

void myexit(char *b)
{
if (strcmp(command, "exit") == 0)
{
printf("Exiting shell.\n");
break;
}
}
/**
 * myenv - environ function
 * @b: char
 * Return: void
 */
void myenv(char *b)
{
if (strcmp(b, "env") == 0)
{
print_env();
continue;
}
}
