#include "main.h"
/**
 * _strlen - returns
 * Owned by Skyline
 * @s: char to check
 * Description: this will return the lengthn of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
