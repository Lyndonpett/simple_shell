#include "shell.h"
/**
 *
 *
 */
char *dir(char **argv, char **path_token)
{
	struct dirent *dir_store;
	DIR *directory = NULL;
	int i;
	char *exe = NULL, *store = NULL;

	/* Testing to see if its already an executable */
	if (argv[0][0] == '/')
	{
		return (argv[0]);
	}
	/* looping through the path_token */
	for (i = 0; path_token[i] != NULL; i++)
	{
		/* Use Opendir to access all the path directories */
		directory = opendir(path_token[i]);
		/* Reading the open directories */
		while ((dir_store = readdir(directory)) != NULL)
		{
			/* If we find a match proceed on with the if loop */
			if (_strcmp(argv[0], dir_store->d_name) == 0)
			{
				store = path_token[i];
				exe = exe_maker(store, argv);
				closedir(directory);
				return (exe);
			}
		}
	closedir(directory);
	}
return(NULL);
}

/**
 *
 *
 *
 */
char *exe_maker(char *store, char **argv)
{
	char *slash;
	char *commando;

	/* Adding a slash to the first string */
	slash = _strcat(store, "/");
	/* Concatenate both slash string and argv string */
	commando = _strcat(slash, argv[0]);

	/* Need to free slash because strcat mallocs */
	free(slash);
	return (commando);
}
