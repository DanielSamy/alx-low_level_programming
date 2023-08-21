#include "main.h"

/**
 * _strcpy - copy string pointer
 * @dest: string copy to
 * @src: char copy from
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
