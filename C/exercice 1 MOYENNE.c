#include <stdio.h>
#include <stdlib.h>

double AvString(int our_string[], int stringSize);

int main() {

    int string[9] = {1,2,3,4};
    int i;

    AvString(string, 9);


return 0;

}

double AvString(int our_string[], int stringSize) {

    int i;
    double s = 0; // Sum
    for (i=0; i < stringSize; i++) {
        printf("%d \n", our_string[i]);
        s = s + our_string[i]; //Sum of values


        }
    s = s / i;

    return printf("average is %f",s);

}

