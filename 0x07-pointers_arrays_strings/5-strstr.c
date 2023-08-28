#include "main.h"

/***/

char *_strstr(char *haystack, char *needle)
{
	char *d = haystack;
	char *p = needle;

	for (; *haystack != '\0'; haystack++)
	{
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
