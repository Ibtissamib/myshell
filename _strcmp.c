#include "shell.h"
/**
 * _strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 * Discription: copares the first character of each string and returns a value
 *
 * Return: 0 if Succes
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
