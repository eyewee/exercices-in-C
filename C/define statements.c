#include <stdio.h>
#include <stdlib.h>
#define MAJEUR(age) if (age >= 18) \
                    printf("success"); \
                    else \
                    printf("filed");


int main () {


MAJEUR(19)
MAJEUR(17)

    return 0;
}
