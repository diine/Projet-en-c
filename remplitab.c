#include<stdio.h>
#include <stdlib.h>

//fonction permettant de definir le mot initial par des *

char* Newtab(char* tab, int taille)
{
    int i;

    for(i=0;i<taille;i++)
    tab[i]='*';

    return tab;
}


