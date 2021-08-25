#include "shell.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: First string.
 * @src: Second string.
 *
 * Return: Dest.
 */
/*char *_strcat(char *dest, char *src)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}*/

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
/**
 * _strcat - concatenates two strings
 *
 * @dest: First string.
 * @src: Second string.
 *
 * Return: Dest.
 */

char *_strcat(char *dest, char *src)
{
	int a, p, x;
	char *newcmd = NULL;

	for (p = 0; dest[p] != '\0'; p++)
	{
	}
	for (a = 0; src[a] != '\0'; a++)
	{
	}
	newcmd = malloc(sizeof(char) * (a + p + 1));
	for (x = 0; x < p; x++)
	{
		newcmd[x] = dest[x];
	}
	for (x = 0; x < a; x++)
	{
		newcmd[x + p] = src[x];
	}
	newcmd[x + p] = '\0';
	return (newcmd);
}