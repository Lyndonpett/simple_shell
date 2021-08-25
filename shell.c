#include "shell.h"

int main(void)
{
	char *money_sign = "$ ";
	char *buffer = NULL;
	char **argv, **path_tokens;
	size_t buffer_length = 0;
	ssize_t userinput;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDIN_FILENO, money_sign, _strlen(money_sign));
		userinput = getline(&buffer, &buffer_length, stdin);
		if (userinput < 0)
			break;
		argv = tokenizer(buffer);
		if (func_finder(argv, buffer) == 1)
		{
			continue;
		}
		path_tokens = _getenv("PATH");
		everything_free(path_tokens);
		free(argv);
	}
	free(buffer);

	return (0);
}
