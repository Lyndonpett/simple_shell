#include "shell.h"
/**
 * _getenv -  function that gets value of
 * env variable by its input
 * @name: Name of the Env var
 * Return: Val of Env val
 */
char **_getenv(char *env)
{
	int content, line;
	char *name = NULL; /** Environment Path that we want to return **/

	for (line = 0; environ[line] != NULL; line++)
	{
		for(content = 0; environ[line][content] != '='; content++)
		{
			if (environ[line][content] != env[content])
			{
				break;
			}
			if (environ[line][content] == env[content])
			{
				if (env[content + 1] == '\0' && environ[line][content + 1] == '=')
				{
					name = _strdup(&(environ[line][content + 2]));
					return(env_tokenizer(name));
				}
			}

		}
	}
	return (NULL);
}
/* MAYBE CUT MAYBE NOT
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
*/
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
