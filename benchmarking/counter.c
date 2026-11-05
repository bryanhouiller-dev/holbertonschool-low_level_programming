#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *filename = "green_efficiency_analysis.md";
    FILE *file = fopen(filename, "r");
    
    if (file == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

    long character_count = 0;
    int ch;

    // Lecture du fichier caractère par caractère
    while ((ch = fgetc(file)) != EOF) {
        character_count++;
    }

    fclose(file);

    printf("Le fichier '%s' contient %ld caractères.\n", filename, character_count);

    return 0;
}