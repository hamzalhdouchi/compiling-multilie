#include "mini.h"

    void nbt(int cont)
    {
        int i,s;
          printf("\n");
       printf("==============================================\n");
       printf("**********************************************\n");
       printf("*          numbre de liver en sstock         *\n");
       printf("**********************************************\n");
        for(i=0;i<cont;i++)
        {
            s += livers[i].quantite;
        }
        printf("le totle de liver est %d", s);
    }
