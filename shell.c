#include "shell.h"

int main(void)
{
	char *buffer = NULL;
	char **argv;
	size_t buffer_length = 0;
	ssize_t userinput;

	while (1)
	{
		printf("$ ");
		userinput = getline(&buffer, &buffer_length, stdin);
		if (userinput < 0)
			return (-1);
		argv = tokenizer(buffer);
		if (!_strcmp(argv[0], "exit"))
		{
			break;
		}
		if (!_strcmp(argv[0], "env"))
		{
			_getenv("fart");
		}
	}
	free(argv);
	free(buffer);

	return (0);
}
