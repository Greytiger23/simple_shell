#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define MAX_BUFFER_SIZE 64

/**
 * split - splits the command
 * @b: char array
 * Return: void
 */

char **split(char *b)
{
Int buff = MAX_BUFFER_SIZE, sum = 0;
char **c = malloc(buff * sizeof(char *));
char *x;
const char *y = “ \n\r\t\a”;
if (!c)
{
printf(“shell: allocation error\n”);
exit(EXIT_FAILURE);
}
x = strtok(b, y);
while (x != NULL)
{
c[sum] = x;
sum++;
if (sum >= buff)
{
buff += MAX_BUFFER_SIZE;
c = realloc(c, buff * sizeof(char *));
if (!c)
{
printf(“shell: allocation error\n”);
exit(EXIT_FAILURE);
}
}
X = strtok(NULL, y);
}
c[sum] = NULL;
return (c);
}
