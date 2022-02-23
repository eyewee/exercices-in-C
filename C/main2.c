#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

const int MAX = 100, MIN = 1;
int mysterynumber = 0;

srand (time(NULL));

mysterynumber =  (rand()% (MAX-MIN+1))+MIN;

printf("%d", mysterynumber);


return 0;


}

