#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: always 0 (success)
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *d = haystack;
		char *p = needle;

		while (*d == *p && *p != '\0')
		{
			d++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
