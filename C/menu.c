#include <stdio.h>
#include <stdlib.h>

int main()
{

   int menuChoise = 0;


   printf("==Menu du jour==\n 1. kebeb tres bon \n 2. pizza \n 3. pastec \n 4. galette \n\n");


   scanf("%d", &menuChoise);
   printf("tu as choisi le choix n%d \n", menuChoise);

   switch (menuChoise) {

case 1 :
    printf("kebeb tres bon");
    break;

case 2 :
    printf("pizza");
    break;

case 3 :
    printf("pastec");
    break;

case 4 :
    printf("galette");
    break;

default :
    printf("t'as pas choisi mec");
    break;


   }


printf("\n cbon tu peux t'en aller \n\n\n");


    return 0;
}
