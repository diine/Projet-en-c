#include<stdio.h>
#include<stdlib.h>

//fonction permettant de recuperer le nombre de mot afin de generer
//aleatoirement un mot

int Nmbre_de_mot()
{
    int nmbr_de_mot=0;
    FILE *fichier = NULL;
    char carac=0;

    fichier=fopen("dico","r");
    if(fichier==NULL)
    exit(0);

    carac=fgetc(fichier);
    while(carac != EOF)
    {

    if(carac == '\n')
    (nmbr_de_mot)++;
    carac=fgetc(fichier);

    }

    fclose(fichier);

    return nmbr_de_mot;
}



