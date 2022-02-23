#include <stdio.h>
#include <string.h>

int stringMeter (const char string[], int stringLength);

int main () {


int string[4]={1,2,3,4};
int str_size = 0;
int str_sum = 0;

str_size = strlen(string);
str_sum = stringMeter(string, 4);


printf("sum of it is %d \n", str_sum);

return 0;
}

int stringMeter (const char string[], int stringLength) {

int counter = 0;
int number = 0;
int sum = 0;

do
{
    sum = string[counter]+sum;
    counter++;

    }
//increment until string end is reached
while ( stringLength != counter);


return sum;}
