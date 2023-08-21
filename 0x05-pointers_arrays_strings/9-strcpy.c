#include "main.h"

/**
 * _strcpy - copy string pointer
 * @dest: string copy to
 * @src: char copy from
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do
	{
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
