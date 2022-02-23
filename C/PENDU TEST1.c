#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//function to choose word from a dictionary//////////
/* char secretWord () { */

 int main() {

    srand (time(NULL)); // random char initialization
    int max = 0; //max amount of \n
    int min = 0; //min amount of \n
    int randomNbr = 0;
    FILE* dictionary = NULL;

    char actualChar = NULL;
    /* char actualChar = wordString; // no need this */

    FILE *file = NULL; //creating ptr for our dictionary file
    file = fopen("dictionary.h", "r");//point it on file, mode read only

    /*testing if file exists and opened, if opened,
    we'll count words and choose one, else, close file */
    if (file != NULL)
    {
// parse file and count words by \n at the end of lines
      // first, do a loop for fgets
       do
       {
       actualChar = fgetc("dictionary.h" //wrong! here must be pointer on .h file!);
       // when fgetc returns null => add 1 to "max"
        if (actualChar = '\0');
       max++;
       }
       //repeat all this till the end of file
       while (actualChar != EOF);

       //testing loop result
       printf("max = %d", max);

    // than go to the beginning of file
    void rewind(file);

    // pick a random number of line
    int randomNbr = (rand() % (max-min+1))+min;

    /* chosen number is = the line number where our word is,
    now read this word into "word[100]" string   */
    char *word = fseek(file, randomNbr, SEEK_CUR);
    printf("our word is %s", word);

    }
 ////////////////////////////////////////////////
    else
    {
        printf("file not found");
        fclose("dictionary.h");
    }
return 0;
}




in main() {

dico = fopen("dico.txt", "r"); //


    if (dico == NULL)
    {
        printf("\nImpossible de charger le dictionnaire de mots");
        return 0;
    }

    do //count nb of words (=lines) by presence of \n at the end of lines
        {
        storeChar = fgetc(dico);
        if (storeChar == '\n')
                nombreMots++;
        } while(storeChar != EOF);

numMotChoisi = nombreAleatoire(nombreMots); // On pioche un mot au hasard

}


int choseWord(char *secretWord)
{
    FILE* dictionnaire = NULL;
    int nombreMots = 0, numMotChoisi = 0, i = 0;
    int storeChar = 0;
