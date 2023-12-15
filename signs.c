#include "shell.h"

/**
  * handle_comment - handles d '#' in the input
  * @input: input value
  *
  * Return: stripped down input
  */

char *handle_comment(char *input)
{
	char *comment_pos;

	comment_pos = strstr(input, " #");

	if (comment_pos)
	{
		*comment_pos = '\0';
	}

	return (input);
}
