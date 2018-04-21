#include<stdio.h>
#include <stdlib.h>
#include<ctype.h>
//fonction permettant de recuperer le caractere sans la frappe entree(\n)
char Caractere()
{
    char carac=0;

    carac=toupper(getchar());
    while(getchar() != '\n');

    return carac;
}


