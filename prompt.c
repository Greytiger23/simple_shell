#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * myprompt - display the shell prompt
 * Return: void
 */

void myprompt(void)
{
mess("simple_shell$ ");
}
