int call_fork(char *userinput, ssize_t nlines)
{
	ssize_t j = 0, i = 0, matrix_size = 0;
        char *b, *cmd,  *path_cmd, *path, *s, *s_slash;

        matrix_size = nbr_wrd(userinput, nlines);
        b = strtok(userinput, " ");
        if (j == matrix_size - 1)
        {
                cmd = (char *)malloc(sizeof(char) * _strlen(b));
                for (i = 0; i < (_strlen(b) - 1); i++)
                        cmd[i] = b[i];
                cmd[i] = '\0';
        }
        else
                cmd = _strdup(b);
        path = _getenv("PATH");
        path_cmd = strtok(path, ":");
        s_slash = str_concat(path_cmd, "/");
        s = str_concat(s_slash, cmd);
        while (path_cmd != NULL)
        {
                if (access(s, F_OK) == 0)
			return (1);
                        
                path_cmd = strtok(NULL, ":");
                s_slash = str_concat(path_cmd, "/");
                s = str_concat(s_slash, cmd);
        }
	return (0);

}
