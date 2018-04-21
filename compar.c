#include<stdio.h>
#include<string.h>

//fonction permettantde comparer le mot courant au mot a deviner
 int result(int taille,char *mot, char* chaine)
 {
    int i,j=0;


     for(i=0;i<taille;i++)
    {
        if(chaine[i]==mot[i])
        j++;
    }

       if(j==taille){
       printf("\n\t  Bravo le mot à deviner est bien  %s\n\n", mot);
       return 1;}
       else{
       printf("\n\t\tQuel est le mot à deviner ??? \n\n");
       printf("\n\t\t\t%s\n", chaine);
       return 0;}



}


