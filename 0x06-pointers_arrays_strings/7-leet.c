#include "main.h"

/**
 * leet -  function that encodes a string into 1337
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int t, u;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (t = 0; n[t] != '\0'; t++)
	{
	for (u = 0; u < 10; u++)
	{
	if (n[t] == s1[u])
	{
	n[t] = s2[u];
	}
	}
	}
	return (n);
}

