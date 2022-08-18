#ifndef MAIN_H
#define MAIN_H

#define UNUSED(x) (void)(x)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stat.h>
#include <errno.h>
#include <signal.h>
#include <stddef.h>
#include <stdbool.h>

int main(void);
int str_len(char *string);
char *str_cat(char *dest, char *src);
char *strn_cmp(char *string1, char *string2, size_t n);
char *str_dup(char *string);
int token_counter(char *p, char *delimiter);
char **tokenizer(char *string, char *delimiter);
void _free_ptr(char **p);
char *get_env(char *token);
int fork_process(char **token_line, char *path);

extern char **environ;

#endif /* MAIN_H */

