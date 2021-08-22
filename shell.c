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
		printf("%s\n", argv[0]);
		printf("%s\n", argv[1]);
		printf("%s\n", argv[2]);
	}
	return (0);
}