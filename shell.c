#include "shell.h"

/**
 * main - prints the shell
 * Return: zero.
 */
int main(void)
{
	char *money_sign = "$ ";
	char *buffer = NULL;
	char **argv, **path_tokens;
	char *xcuteable;
	size_t buffer_length = 0;
	/*ssize_t userinput;*/

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, money_sign, _strlen(money_sign));
		if (getline(&buffer, &buffer_length, stdin) == EOF)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			exit(0);
		}
		if (buffer == NULL)
			exit(0);
		argv = tokenizer(buffer);
		if (argv[0] == NULL)
			continue;
		if (func_finder(argv, buffer) == 1)
		{
			free(argv);
			continue;
		}
		path_tokens = _getenv("PATH");
		xcuteable = dir(argv, path_tokens);
		if (xcuteable != NULL)
		{
			execute(xcuteable, argv);
		}
		free(xcuteable);
		everything_free(path_tokens);
		free(argv);
	}
	free(argv);
	free(buffer);
	return (0);
}
