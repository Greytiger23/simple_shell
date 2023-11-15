#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

extern char **environ;
int main(int ac, char **av, char **e);
void myprompt(char **n, char **e);
void mess(const char *a);
char **split(char *b);
void excu(const char *b);
void myline(char *b, size_t x);
void argu(char *b);
void print_env(void);
#endif
