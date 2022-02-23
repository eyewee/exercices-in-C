#include <stdio.h>
#include <stdlib.h> //for malloc and free





typedef struct Element Element;
/* here typedef is to be able to call ur structure 'Element' instead
of writing each time 'struct Element' */

struct Element {

    int nombre;
    /* this structure will only contain 1 var => "nombre"
    we can place what we want here, even data type that we created
    in another structure */
    Element *suivant; // ptr of type Element

};

typedef struct Liste Liste; //parent structure, to manage chain Elements
struct Liste {

    Element *premier;

};


Liste *initialisation() {
//ptr called "initialisation" of type Liste

    Liste *liste = malloc(sizeof(*Liste));
    /* ptr "liste" of type Liste, sized automatically, Liste is sized as
    Element,and elements is sized as int = 4 bites. Malloc */
    Element *element = malloc(sizeof(*Element));

    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->nombre = 0;
    element->suivant = NULL;
    liste->premier = element;

    return liste;

}
