#include "main.h"
#include <stdio.h>
/**
 * _strspn - grts the length of a prefix substring
 * @s: string
 * @accept: source
 * return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned in court = 0;
	unsigned in prev = 0;
	int i, j;
	i = 0;
	j = 0;
	while (*(s+i) !='/0/)
	{
		j = 0;
		prev = count;
		while (*(accept +j) != '/0)
		{
			if (*(s+i) == *(accept + j))
			{ 
				court++;
			}
			j++;
		}
		if (prev == court)
		{
			break;
		}
		i++;
	}
	return (court);
}
