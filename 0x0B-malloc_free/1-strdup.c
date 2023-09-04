#include "main.h"

/**
 * _strdup - dupplicate new memory
 * @str: char
 * Return: 0
*/

char *_strdup(char *str)
{
	char *d;
	int i, size = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	d = malloc(size * sizeof(*str) + 1);
	if (d == NULL)
		return (NULL);
	for (size = 0; str[size]; size++)
		d[size] = str[size];
	return (d);

}
