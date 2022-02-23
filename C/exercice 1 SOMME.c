#include <stdio.h>
#include <stdlib.h>

int SumString(int our_string[], int stringSize);

int main() {

    int string[9] = {1,2,3,4};
    int i;

    SumString(string, 9);


return 0;

}

int SumString(int our_string[], int stringSize) {

    int i;
    int s = 0; // Sum
    for (i=0; i < stringSize; i++) {
        printf("%d \n", our_string[i]);
        s = s + our_string[i]; //Sum of values


        }

    return printf("sum is %d",s);

}

