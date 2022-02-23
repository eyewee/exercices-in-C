#ifndef DEF_DICO
#define DEF_DICO

int win(int *foundChar, long wordSize);
char readChar();
int searchChar(char myChar, char secretWord[], int foundChar[]);

int choseWord(char *secretWord);
int nombreAleatoire(int nombreMots);

#endif
