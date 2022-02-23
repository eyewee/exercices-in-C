#include <stdio.h>
int read (char *string, int length);


int main () {


char string[20];
read (string, 20);
printf("here is the output: %s", string);



char pointer[20];
fgets(pointer, 20, stdin);
printf("%s", pointer);

return 0;
}



int read (char *string, int length) {

char *npose = NULL;

    if (fgets (string, length, stdin) != NULL)
        {
        npose = strchr(string, '\n');
            if (npose != NULL)
            {
                *npose = '\0';
            }
        return 1;
        }
        else { return 2; }

}
