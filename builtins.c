#include "shell.h"
/**
 *
 *
 */
int sh_exit(char **argv, char *buffer)
{
	free(argv);
	free(buffer);
	exit(0);
}
/**
 *
 *
 *
 */
int sh_env(void)
{
	int line, content;
	char *string = NULL; /* create a placeholder for each line */
	/* loops through the line number of env */
	for (line = 0; environ[line] != NULL; line++)
	{ /* loops through the characters to print that line */
		for (content = 0; environ[line][content] != '\0'; content++)
		{ /* stores into string */
			string = (&(environ[line][content]));
			/* prints with write to std output */
			write(STDOUT_FILENO, string, _strlen(string));
			break;
		}
		_putchar('\n');
	}
	return (0);
}
/**
 *
 *
 *
 */
int sh_setenv(char **argv)
{
	argv = argv;
	return (0);
}
/**
 *
 *
 */
int sh_unsetenv(char **argv)
{
	argv = argv;
	return (0);
}
/**
 *
 *
 */
int sh_cd(char **argv)
{
	argv = argv;
	return (0);
}
