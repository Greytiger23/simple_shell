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
void excu(char **b);
char *myline(void);
char **args(char *b);
void print_env(void);
void loop(int a, char **av, char **env);
int m(int ac, char **av, char **env);
void menv(int ac, char **av, char **env);
void _fork(char *av[]);
void myexit(char *b);
void myenv(char *b);
#endif
