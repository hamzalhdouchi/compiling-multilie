#include "mini.h"

    void afficher(int cont)
    {
        int i;
        printf("    num                   auture               prix             quantite\n");
        for(i=0;i<cont;i++){
        printf("%d : %-20s   %-20s   %.2f             %d\n",i+1,livers[i].T,livers[i].A,livers[i].prix,livers[i].quantite);
    }

    }
