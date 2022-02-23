#include <stdio.h>
#include <stdlib.h>


int main() {

FILE *fichier = NULL;
fichier = fopen("test.txt", "r+");

if (fichier =! NULL)
    {
    printf("file opened");
    }
else {
    printf("error while opening file");
}
return 0;
}
