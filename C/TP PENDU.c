#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char readChar();
char analyseChar();
char search(char chosenWord[], char myChar);
#define SIZE 6


int main() {
    int attempt = 10;
    int i = 0;
    char chosenWord[] = "EMPTY";
    char fillWord[SIZE] = "*****";
    char myChar = 0;
    int letterFound = 0; //boolean, 1 if yes, 0 if no
    //fillWord with be uncovering '*' letter by letter

    printf("Hello player! Remember, you have %d attempts!\n", attempt);

/*repeat until no more attempts or we found the word   */
        while (fillWord != chosenWord && attempt > 0)
        {
        printf("Type in a letter to guess the word\n");
        printf("chosenWord - %s      and    fillWord - %s\n", chosenWord, fillWord);

        myChar = readChar(); //calling my function to ask for a letter
        printf("my letter is %c\n", myChar); //DEBUG

        char *str = search(chosenWord, myChar);

            //all this until NULL is met in our word string
            if ( str!= NULL)
                {
                 fillWord[i] = chosenWord[i];
                 printf("%s\n", fillWord);
                 i++;
                }
            else
                {
                 printf("%s\n", fillWord);
                 attempt--;
                 printf("\nwrong letter, you have %d attempts left\n", attempt);
                }

        }





return 0;
}

//////stringsrch with returning back cursor//////////
char search(char chosenWord[], char myChar) {

    char *ptr = strchr(chosenWord, myChar);

    if (ptr != NULL) { //char is found
        ptr = 1;
    }
    else {
        ptr = 0;
    }
 ////pointer will show on position of letter
 //but at which place letter was found?
 // we need the relative position of ptr to strchr
//value containing location of found letter



return ptr;
}





//function to type in a character, returns character
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


/* function to analyse if char corresponds to snth in word,
it will return word with char inside if corresponds,
if not corresponds, it will return word with "*"
char analyseChar(fillWord, chosenWord, myChar) {
    int i = 0;

while (fillWord != NULL)
    {
        //all this until NULL is met in our word string
        if (chosenWord[i] == myChar)
            {
             fillWord[i] = chosenWord[i];
             printf("%s", fillWord);
             i++;
            }
        else
            {
             printf("%s", fillWord);
            }
    }
return fillWord;
}
*/









