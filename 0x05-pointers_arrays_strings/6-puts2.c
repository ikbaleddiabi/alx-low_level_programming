#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character.
 * @str: An input string
 * Return: none
 */
void puts2(char *str)
{
int len = 0, i = 0;

while (str[len] != '\0')
len++;

len -= 1;

for (; i <= len; i += 2)
putchar(str[i]);

putchar('\n');
}
