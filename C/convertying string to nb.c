#include <stdio.h>
int read (char *string, int length);
double lireDouble ();




int main () {


double number = 0;
number = lireDouble();
printf("here is the output double: %f", number);



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


double lireDouble () {

    char nbTxt[100] = {0};

    if (read(nbTxt, 100))
    {
        return strtod(nbTxt, NULL);
    }

    else
    {
        return 3;
    }

return 1;
}



