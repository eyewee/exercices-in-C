#include <stdio.h>
#include <stdlib.h>
#define SIZE_MAX 1000 // String size not to cross
//Every SIZE_MAX will be replaced by 1000 in program


int main() {

FILE* fichier = NULL;
char string[SIZE_MAX] = ""; // empty string for our fgets

fichier = fopen("test.txt", "r");

if (fichier != NULL) // if it opened
    {
    fgets(string, SIZE_MAX, fichier);
    /* We read max 1000 chars on single line of text
    Otherwise it will stop at \n if not reached 1000 chars */
    printf("%s", string);

      fclose(fichier);
    }

return 0;
}
