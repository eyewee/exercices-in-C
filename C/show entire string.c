#include <stdio.h>
#include <stdlib.h>

void show_string(int *our_string, int itsSize);

int main() {

    int string[9] = {1,2,3,4};
    int i;

    show_string(string, 9);


return 0;

}

void show_string(int *our_string, int itsSize) {

    int i;
    for (i=0; i < itsSize; i++) {
        printf("%d \n", *(our_string+i));
        }

}

