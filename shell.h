#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

extern char **environ;
void _stat(int ac, char *av[]);
void myprompt(void);
void mess(const char *a);
char **split(char *b);
void excu(char **b, char **env);
void myline(char *b, size_t x);
char **args(char *b);
void print_env(void);
void loop(char **av, char **env);
int main(int ac, char **av, char **env);
void menv(int ac, char **av, char **env);
#endif
