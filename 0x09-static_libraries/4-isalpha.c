#include "main.h"

/**
 * _isalpha - checks if the character is alphabet
 * @c: the character to be checked
 * Return: 1 if character is alphabet
 * else return 0
 */

int _isalpha(int c)

{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);

}
