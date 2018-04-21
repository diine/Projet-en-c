#include<stdio.h>
#include <stdlib.h>
#include<string.h>

//fonction permettant de remplacer une * par un caractere juste
int Substitution(int taille,char lettre,char *mot, char* chaine)
{
    char carac=0;
    int i,j=0;

    for(i=0;i<taille;i++)//une boucle pour le nombre de caractères à comparer
    {

        carac=mot[i];
        if(carac==lettre ){
        chaine[i]=carac;
        j++;}
    }
    if(j!=0) return 1; //permet de gerer le decomptage
    else return 0;
}


