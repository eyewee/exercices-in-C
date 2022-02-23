#include <stdio.h>
#include <stdlib.h>


int main () {


char str1[]="text starts here";
char *strFin=strchr(str1, 's');



if (strFin != 0) {
    printf("the rest of the string is %s", strFin);
    }

    return 0;
}
