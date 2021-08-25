#include "shell.h"

int main(void)
{
	char *money_sign = "$ ";
	char *buffer = NULL;
	char **argv, **path_tokens;
	char *xcuteable;
	size_t buffer_length = 0;
	ssize_t userinput;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, money_sign, _strlen(money_sign));
		else
			break;
		userinput = getline(&buffer, &buffer_length, stdin);
		if (userinput < 0)
			break;
		argv = tokenizer(buffer);
		if (func_finder(argv, buffer) == 1)
		{
			continue;
		}
		path_tokens = _getenv("PATH");
		xcuteable = dir(argv, path_tokens);
		printf("xcuteable is = %s\n", xcuteable);
		everything_free(path_tokens);
		free(argv);
	}
	free(buffer);

	return (0);
}
