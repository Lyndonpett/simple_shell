#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

char *_getenv(const char *environment);
void _puts(char *str);
int _putchar(char c);
int _strlen(char *s);
char *concat_all(char *name, char *sep, char *value);
char *_strdup(char *str);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char **tokenizer(char *input_str);
int _strcmp(char *s1, char *s2);
char *grab_name(char *full_line);
char **env_tokenizer(char *input_str);

typedef struct func_finder {
	char *argv;
	int (*func)();
} func_finder;


#endif /* SHELL_H */
