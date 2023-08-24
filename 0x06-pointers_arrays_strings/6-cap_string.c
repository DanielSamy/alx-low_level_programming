#include "main.h"

/**
 * cap_string - capitilaize all word of string
 * @ptr: string be capitlaize
 * Return: ptr
*/

char *cap_string(char *ptr)
{
	int index = 0;

	while (ptr[index])
	{
		while (!(ptr[index] >= 'a' && ptr[index] <= 'z'))
			index++;

		if (ptr[index - 1] == ' ' ||
		ptr[index - 1] == '\t' ||
		ptr[index - 1] == '\n' ||
		ptr[index - 1] == ',' ||
		ptr[index - 1] == ';' ||
		ptr[index - 1] == '.' ||
		ptr[index - 1] == '!' ||
		ptr[index - 1] == '?' ||
		ptr[index - 1] == '"' ||
		ptr[index - 1] == '(' ||
		ptr[index - 1] == '{' ||
		ptr[index - 1] == '}' ||
		 index == 0)
			ptr[index] -= 32;

		index++;

	}

	return (ptr);

}
