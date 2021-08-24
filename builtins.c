#include "shell.h"

int sh_exit(char **argv, char *buffer)
{
	free(argv);
	free(buffer);
	exit(0);
}

int sh_env(void)
{
}

int sh_setenv(char **argv)
{
}

int sh_unsetenv(char **argv)
{
}

int sh_cd(char **argv)
{
}
