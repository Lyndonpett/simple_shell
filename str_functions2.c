#include "shell.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: a character pointer we are inputting
 * @src: a character pointer we are inputting
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/**
 * _puts - prints a string
 * @str: pointer to string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _strcmp -  compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 *
 *
 * Return: The strings compared.
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && (*s1 == *s2); s1++, s2++)
	{
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

/**
 *
 *
 */
int everything_free(char **pointer_array)
{
	int i = 0;

	while (pointer_array[i])
	{
		free(pointer_array[i]);
		i++;
	}
	free(pointer_array);
}
