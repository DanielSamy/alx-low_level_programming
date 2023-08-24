#include "main.h"

/**
 * leet - encode into 1137 speak
 * @d: input value
 * Return: d
*/

char *leet(char *d)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; d[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (d[i] == s1[j])
			{
				d[i] = s2[j];
			}
		}
	}
	return (d);
}
