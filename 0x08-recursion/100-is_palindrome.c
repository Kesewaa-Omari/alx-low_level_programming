#include "main.h"

int _strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
        int len = 0;

        if (*(s + len))
        {
                len++;
                len += _strlen(s + len);
        }

        return (len);
}
