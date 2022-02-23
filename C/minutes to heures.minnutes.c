#include <stdio.h>
#include <stdlib.h>


int main() {
int string[9];
int i = 0;

for (i=0; i < 9; i++) {
    string[i]=0;
    printf("%d \n", *(string+i));

}

return 0;

}
