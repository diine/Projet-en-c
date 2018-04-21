#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"pendu.h"


int main()

{
    int taille_du_mot=0,fin=0,compteur=10, correct=0;
    char mot_a_deviner[MAX];
    char lettre=0;
    char* chaine=NULL;
    char continuer='O';


    while(continuer=='O'){
    printf("\tBienvenue dans votre jeu; j'ai nommé LE PENDU\n");
    printf("\t\t\tCommençons!!\n\n");
    printf("\t\tQuel est le mot à deviner ???\n");

    Mot_secret(Nmbre_de_mot(), mot_a_deviner); //recuperation d'un mot dans le fichier (geneRmot.c)

    taille_du_mot=strlen(mot_a_deviner) - 1; //-1 pour retirer la case du caractere '\n'

   // printf("%d\n", taille_du_mot);

    chaine = malloc(taille_du_mot * sizeof(char)); //creation d'un tableau de taille (taille_du_mot)
    if(chaine == NULL)
    exit(0);

    Newtab(chaine, taille_du_mot); //initialisation de chaine avec des * (remplitab.C)
    printf("\n\t\t\t%s\n", chaine);



    while(fin==0  && compteur!=0)
        {
        printf("    Vous avez encore %d tentative(s) avant d'être PENDU!!!\n\n", compteur);
        printf("\t\t    Entrez une lettre\n\n");

        lettre=Caractere();

        correct=Substitution(taille_du_mot,lettre, mot_a_deviner, chaine); /*on verifie si la lettre entrer
        par l'utilisateur ' est dans mot_a_deviner si oui on le met a la meme position dans chaine*/

        if(correct==0) compteur--;
        fin=result(taille_du_mot, mot_a_deviner, chaine);
        if(compteur==0)
        printf("\n\t\t\tVous avez perdu !\n\n");

        };

        free(chaine);

        fin=0;
        compteur=10;

        do{
        printf("\n    Voulez vous faire une nouvelle partie ? O ou N \n");
        continuer=Caractere();
        }while(continuer !='O' && continuer!='N');
        system("clear"); //system("cls") sous windows
}

    return 0;

}



