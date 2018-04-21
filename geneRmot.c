#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 20

//generation aleatoire des mots
char* Mot_secret(int n, char *tab)
{
    FILE *fichier = NULL;
    int nmbr_aleatoire=0,i;;
    char carac=0;

    srand(time(NULL));

    nmbr_aleatoire=rand() % n;

    fichier=fopen("dico","r");
    if(fichier==NULL)
    exit(0);

    for(i=0;i<nmbr_aleatoire;i++)
    {
    carac=fgetc(fichier);
    while(carac != '\n')
    carac=fgetc(fichier);
    }

    fgets(tab,MAX,fichier);

    fclose(fichier);

    return tab;

}



