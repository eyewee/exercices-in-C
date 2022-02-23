#include <stdio.h>
#include <stdlib.h>


int main() {

int *pointer = NULL;
pointer = malloc(sizeof(int)); //allocation memory

if (pointer == NULL)
{
    exit(0); //means no memory were given so stop all
}

//otherwise here's my program
printf("what's ur age ? \n");
scanf("%d", pointer);
printf("u are %d years old", *pointer);
/* *pointer bcz we need to show what is at its address
that was given to us by allocation */

free(pointer);

return 0;
}

