#include <stdio.h>
#include <stdlib.h>

int conversion(int fois, char text) {

int i;
   for (i=0; i < fois; i++) {
        printf("%s", &text);

   }


int main () {

char string;
int fois;

printf("Le nombre de fois\n");
scanf("%d", &fois);
printf("nom de punition");
scanf("%s", &string);

printf("%s", conversion(fois, string));


return 0;

}
