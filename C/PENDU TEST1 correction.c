#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "dico.h" //prototypes





//////chose random word from dictionary//////////////////////////////
int choseWord(char *secretWord)
{
    FILE* dico = NULL; //pointer will point onto our dictionary.h
    int nombreMots = 0; //how many words are in dictionary
    int numMotChoisi = 0; //what word we chose, by its number of line
    int i = 0;
    int storeChar = 0;

    dico = fopen("dictionary.h", "r"); //point onto our  dictionary.h

    if (dico == NULL) //test loop if all works//////////////////////////
        {
        printf("\nerror, file not found");
        return 0; //return indicates "stop here the program"
        }

//////count nb of words (=lines) by presence of \n at the end of lines
    do
        {
        storeChar = fgetc(dico);
        /* search our Char in dictionary by pointer to the dictionary!
        fgetc will search char by char */
        if (storeChar == '\n')
            {
          nombreMots++; } //add 1 each time we meet "\n" in a line
        } while(storeChar != EOF); //until end of file

//now we know how many words we got, we need to chose one by its line nb
    //function to chose random number of line/word  ////
    numMotChoisi = nombreAleatoire(nombreMots); //save this nb in numMotChoisi

//go back to the beginning of dictionary
    rewind(dico);

// loop to place cursor on a chosen line in numMotChoisi
    while (numMotChoisi > 0)
    {
        storeChar = fgetc(dico);
        if (storeChar == '\n') {
        /* "\n" is met by storeChar only at end of line. When it's met
        we decrease numMotChoisi, until we stop at line 5 = where chosen
        word is located */
            numMotChoisi--; }
    }

//now we need to read the word on this line
    fgets(secretWord, 100, dico); //read word in dictionary

//but it will also read \n, and we don't want it, so:
    secretWord[strlen(secretWord) - 1] = '\0';
    //we replace this   \n    by     \0


fclose(dico);

    return 1;
}



//choses random number between 0 and nbMax and returns result
int nombreAleatoire(int nombreMots)
{
    srand(time(NULL));
    return (rand() % nombreMots);
}


