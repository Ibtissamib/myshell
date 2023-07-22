#include "shell.h"
/**
 * _delim- returns delimiter if it's '\n' or ' '
 * @userinput: pointer to char
 * @nlines: ssize_t
 * Return: pointer to char
 */
char *_delim(char *userinput, ssize_t nlines)
{
	int n = 0, i = 0, m = 0;
	char *delim;

	while (i < nlines)
	{
		if (userinput[i] == ' ')
			n++;
		else if (userinput[i] == '\n')
			m++;
		i++;
	}
	if (n == 0 && m >= 1)
	{
		delim = malloc(sizeof(char) * 2);
		delim[0] = '\n';
		delim[1] = '\0';
	}
	else
	{	delim = malloc(sizeof(char) * 2);
		delim[0] = ' ';
		delim[1] = '\0';
	}
	return (delim);

}
