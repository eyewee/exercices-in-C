#include <stdio.h>
#include <stdlib.h>


int main() {

FILE* fichier = NULL;
int actualChar = 0;

fichier = fopen("test.txt", "r");

if (fichier != NULL)
    {
    do{
       actualChar = fgetc(fichier); //reading chars
       printf("%c", actualChar); //printing it

      } while (actualChar != EOF); //Until End Of File

      fclose(fichier);
    }

return 0;
}
