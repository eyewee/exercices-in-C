#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //for using function "touper"
#include <string.h>//for using function "strlen"
#include "dico.h" // our functions prototypes
#include "PENDU TEST1 correction.c" //function to select random word




int main() {

    char myChar = 0; // save here char we type in
    char secretWord[100] = {0}; // word to find
    int attempts = 10;
    long wordSize = 0; //determines size of words according to selection
    int i = 0;
    int *foundChar = NULL; //it's size is only known when compiled
    //so we need to use dynamic memory allocation
    /* string, where , for every letter of "secretWord" if letter was found,
    we put 1, else, we put 0. String is sized as "secretWord".
    Every foundChar[i] corresponds to the letter in secretWord[i].
    Exp: if we have "E**TY" so we will have 10011 in foundChar.
    if you win, means foundChar = 11111 (all letters are activated). */

    printf("Welcome in Pendu !\n\n");

//chose random word
if (!choseWord(secretWord)) {//if not returned 1(means OK), close program
    exit(0); }

//save size of secret Word in WordSize
wordSize = strlen(secretWord);

//now we need to allocate memory for foundChar, we give it size of WordSize
foundChar = malloc(wordSize * sizeof(int));
if (foundChar == NULL) {//if it didn't work, close program
    exit(0);}

/////main loop, works only if no attempts left or the word isn't completed////
while (attempts > 0 && !win(foundChar,wordSize))
{
printf("\n\nYou've got %d attempts left", attempts);
printf("\nWhat is the secret word?");
printf("\nType in a character : ");
myChar = readChar(); //function to type in a char


///////function processing secretWord if myChar is in it//////////////
    searchChar(myChar, secretWord, foundChar);
    //returns 1 if found and sets foundChar to 1 if found.


/////* Show secretWord with found letter, masking by '*' unfound letters*//////////////
    for (i = 0 ; i < wordSize ; i++) //stop loop when i = word length (=wordSize)
        {
        if (foundChar[i]) {//if i char is not zero => means found
            printf("%c", secretWord[i]);  }// show this i letter

        else {
            printf("*"); } // or put * otherwise at this i
//no 'attempts--' here bcz it will lesser attempts every time * is put
        }
 ///////// "!" = if char is not found => searchChar returned 0////////////////////////////

        if (!searchChar(myChar, secretWord, foundChar))
        {
            attempts--; //count down attempts each time
        }
}

////if win function return 1 when processing foundChar means we won
if (win(foundChar,wordSize)) {
    printf("\n\nWin ! The secret word was: %s", secretWord); }

else {
    printf("\n\nLose! The secret word was: %s", secretWord); }

free(foundChar); // free up memory
/////////////////END OF MAIN////////////////////////////////////
return 0;
}












///////////////processing secretWord if myChar is in it/////////////////////////
int searchChar(char myChar, char secretWord[], int foundChar[])
{
    int i = 0;
    int okChar = 0;

////process secretWord (until NULL char) if any typed letter is inside
    for (i = 0 ; secretWord[i] != '\0' ; i++)
    {
        if (myChar == secretWord[i]) // if myChar is in secretWord i
        {
            okChar = 1; // Memorize it as being found
            foundChar[i] = 1; // put 1 at this place to activate it
        }
    }

return okChar;
}

///////////////////////////////////////////////////////////////////////////
char readChar()
{   //ask for letter and put it into "char letter"
    char letter = getchar();

    // make this letter a capital letter
    letter = toupper(letter);

    /*we don't want "enter" (\n) be in it, so, loop
    until "\n" is met = means, right after we push "enter" */
    while (getchar() != '\n') ;

return letter;
}

//////////////////////////////////////////////////////////////////////////////
//this may be replaced by (foundChar != "111111")//////////////
int win(int foundChar[], long wordSize)
{
    int i = 0;
    int win = 1;

    for (i = 0 ; i < wordSize ; i++) // process foundChar until last char
    {
        if (foundChar[i] == 0) //if any of [i] = 0, means we lose.
            win = 0;
    }

return win;
}
