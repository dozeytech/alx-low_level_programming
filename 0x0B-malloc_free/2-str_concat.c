#include "main.h"
#include <stdlib.h>

/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, m = 0, n = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[m])
		m++;

	l = i + m;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	m = 0;

	while (n < l)
	{
		if (n <= i)
			s[n] = s1[n];

		if (n >= i)
		{
			s[n] = s2[m];
			m++;
		}

		n++;
	}

	s[n] = '\0';
	return (s);
}
