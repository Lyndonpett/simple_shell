#include "shell.h"
/**
 * _getenv -  function that gets value of
 * env variable by its input
 * @name: Name of the Env var
 * Return: Val of Env val
 */
char *_getenv(const char *environment)
{
	int line_content, line_number;
	char *env_path= NULL; /** Environment Path that we want to return **/

	for (line_number = 0; environ[line_number] != NULL; line_number++)
	{
		if (_strcmp(grab_name(environ[line_number]), "PATH") == 0)
		{
			return(*env_tokenizer(env_path));
		}
	}
	return(NULL);
}
/**
 *
 *
 */
char *grab_name(char *full_line)
{
	int i, length;
	char *after_name;

	for (i = 0; full_line[i] != '='; i++)
	{
		length = i;
	}

	after_name = malloc(sizeof(char) * length);

	for (i = 0; i <= length; i++)
	{
		after_name[i] = full_line[i];
	}
	return(after_name);
}

char **env_tokenizer(char *input_str)
{
	int j;
	int token_inc = 0, token_count = 0, i;
	char **env_tokens;
	char *tokenize;

	for (i = 0; input_str[i] != '\0'; i++)
	{
		if (input_str[i] == ':')
		{
			token_count++;
		}
	}

	env_tokens = malloc(8 * (token_count + 2));

	if (env_tokens == NULL)
	{
		return (NULL);
	}
	else
	{
		tokenize = strtok(input_str, ":");

		while (token_inc < (token_count + 1))
		{
			env_tokens[token_inc] = tokenize;
			tokenize = strtok(NULL, ":");
			token_inc++;
		}
	env_tokens[token_inc] = NULL;
	}
	return (env_tokens);
}
