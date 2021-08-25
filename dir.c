#include "shell.h"
/**
 *
 *
 */
char *dir(char **argv, char **path_token)
{
	struct dirent *dir_store;
	DIR *directory;
	int i;
	char *exe, *store;

