#ifndef MINI_H_INCLUDED
#define MINI_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 typedef struct
    {
        char T[20];
        char A[20];
        float prix;
        int quantite;
    }liver;
    liver livers[100];
    void ajouter(int cont);
    void afficher(int cont);
    void mettre(int cont);
    void recherch(int cont);
    void nbt(int cont);
    void  suprimer(int cont);

#endif /*MINI_H*/
