#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char search(char chosenWord[], char myChar);



int main() {

    int attempt = 10;
    int i = 0;
    char chosenWord[] = "EMPTY";
    char myChar = 0;
    int letterFound = 0; //boolean, 1 if yes, 0 if no
    //fillWord with be uncovering '*' letter by letter

    search(chosenWord, myChar);



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
size_t *location; //value containing location of found letter
location = strcspn(myChar, chosenWord);
printf("location output is %d", location);

    if (location == strlen(chosenWord)) {
        ptr = 0;    }
        else {
            ptr = 1;
            printf("The first match was found at position %d.\n", location);
        }


return ptr;
}
