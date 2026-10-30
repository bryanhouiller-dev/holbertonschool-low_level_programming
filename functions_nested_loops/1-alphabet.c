#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
    char ch;

    /* 1ère utilisation de _putchar : dans la boucle pour imprimer de 'a' à 'z' */
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }

    /* 2ème utilisation de _putchar : pour le saut de ligne */
    _putchar('\n');
}