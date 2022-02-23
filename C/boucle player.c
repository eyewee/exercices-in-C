#include <stdio.h>
#include <stdlib.h>
#include "player_structure.h"




int main () {


Person player1;
    player1.age = 23;
    scanf("%s", player1.nom);
    scanf("%s", player1.prenom);
    scanf("%s", player1.country);
    player1.lives = 3;
    player1.genre = 1;

printf("age is %d \nfirst name is %s last name is %s \n", player1.age, player1.nom, player1.prenom);
printf("country %s number of lives = %d, gender is %d", player1.country, player1.lives, player1.genre);

    return 0;
}
