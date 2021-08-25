#include "shell.h"
/**
 *
 *
 */
int func_finder(char **argv, char *buffer)
{
	int i;

	builtins arr[] = { /*struct for builtin functions */
			   { "cd", sh_cd },
			   { "env", sh_env },
			   { "exit", sh_exit },
			   { "setenv", sh_setenv },
			   { "unsetenv", sh_setenv },
			   { "alias", sh_alias },
			   { '\0', NULL }
	};
	/* checks if input is null or not */
	if (argv != NULL)
	{ /* checks if its exit */
		if (_strcmp(argv[0], "exit") == 0)
		{
			sh_exit(argv, buffer);
			return (1);
		} /* runs through the struct */
		for (i = 0; arr[i].func; i++)
		{ /* finds which function to run, if one is found, it is grabbed */
			if (_strcmp(argv[0], arr[i].argv) == 0)
			{ /* runs the function and returns 1 */
				arr[i].func();
				return (1);
			}
		}
	}
	return (0);
}