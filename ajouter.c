#include "mini.h"

      void ajouter(int cont)
    {
        printf("\n");
       printf("==============================================\n");
        printf("************************************************\n");
        printf("*                 ajoute                       *\n");
        printf("************************************************\n");
        printf("entre le num de liver : ");
        scanf(" %[^\n]", livers[cont].T);
        printf("entre le auteur de liver : ");
        scanf(" %[^\n]", livers[cont].A);
        printf("entre le prix lever : ");
        scanf("%f", &livers[cont].prix);

        printf("entre la quantitie des livers : ");
        scanf("%d", &livers[cont].quantite);

        cont++;
    }
