#include <stdio.h>

/**
 * main - Affiche le nom du programme
 * @argc: Le nombre d'arguments
 * @argv: Le tableau des arguments
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
    /* On cast argc en void pour éviter l'avertissement -Wextra (paramètre non utilisé) */
    (void)argc;

    /* argv[0] contient le nom du programme */
    printf("%s\n", argv[0]);

    return (0);
}
