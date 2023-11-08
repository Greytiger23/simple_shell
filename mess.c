#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * mess - print message function
 * @a: char array
 * Return: void
 */

void mess(const char *a)
{
write(STDOUT_FILENO, a, strlen(a));
}
