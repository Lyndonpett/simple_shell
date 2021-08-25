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
#include <dirent.h>

extern char **environ;

char **_getenv(char *env);
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
int func_finder(char **argv, char *buffer);
int sh_exit(char **argv, char *buffer);
int sh_env(void);
int sh_setenv(char **argv);
int sh_unsetenv(char **argv);
int sh_cd(char **argv);
int sh_alias(char **argv);
int everything_free(char **pointer_array);
char *_strcat(char *dest, char *src);
int execute(char *xecutable, char **argv);


char *dir(char **argv, char **path_token);
char *exe_maker(char *store, char **argv);



typedef struct builtins {
	char *argv;
	int (*func)();
} builtins;


#endif /* SHELL_H */
