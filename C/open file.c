#include <stdio.h>
#include <stdlib.h>


int main() {

FILE* fichier = NULL;

fichier = fopen("test.txt", "w");

if (fichier != NULL)
    {
    fputs("kawabangaaaaaaaaaaaa!", fichier);
    fclose(fichier);
    }

return 0;
}
