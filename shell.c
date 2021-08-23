#include "shell.h"

int main(void)
{
	char *buffer = NULL;
	char **argv;
	size_t buffer_length = 0;
	ssize_t userinput;
	int i;

	while (1)
	{
		i = 0;
		printf("$ ");
		userinput = getline(&buffer, &buffer_length, stdin);
		if (userinput < 0)
			return (-1);
		argv = tokenizer(buffer);
		while (argv[i])
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	free(argv);
	free(buffer);

	return (0);
}