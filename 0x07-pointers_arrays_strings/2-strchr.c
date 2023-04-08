#include"main.h"

 /**
 * _strchr - a function that locates a character in string
 * @s: pointer to string.
 * @c: character that locate to string.
 *
 * Return: to the first occurrence of the character.
 */

char *_strchr(char *s, char c)
{

	while (s[0] != '\0')
	{
		if (s[0] == c)
			return (s);
		else if (s[1] == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
