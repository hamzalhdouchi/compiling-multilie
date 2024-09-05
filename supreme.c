#include "mini.h"

    void  suprimer(int cont)
    {
        char nn[30];
        int i;
        int j,v;
          printf("\n");

       printf("*                   suprimer                 *\n");
       printf("**********************************************\n");
        printf("entre le num de livre :");
            scanf(" %[^\n]",nn);
       for(i=0;i<cont;i++)
       {
           if(strcmp(livers[i].T,nn)==0)
           printf("trouver le liver ");
           printf("%s   %s   %.2f  %d\n",livers[i].T,livers[i].A,livers[i].prix,livers[i].quantite);
           v=1;
            for(j=i;i<cont-1;i++)
       {
           livers[j] = livers[j+1];

       cont--;

       }

       }
       if(!v)
       {
           printf("pas trouve le liver");
       }
    }
