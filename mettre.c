#include "mini.h"

        void mettre(int cont)
        {
       printf("\n");
       printf("==============================================\n");
       printf("**********************************************\n");
       printf("*                   METTRE                   *\n");
       printf("**********************************************\n");
            char nom[20];
            int m;
            int c = 0;
            int i;
            printf("entre le num de livre :");
            scanf(" %[^\n]",nom);
            for(i=0;i<cont;i++)
            {
                if(strcmp(livers[i].T,nom)==0){
                        printf("\n");
            printf("liver trouve %s   %s   %.2f  %d\n",livers[i].T,livers[i].A,livers[i].prix,livers[i].quantite);
            printf("\n");
            printf("entre la nuvelle valeur de quantite : ");
            scanf("%d",&m);
            livers[i].quantite = m;
            printf("loperqtion sucsse\n");
            c = 1;
            break;
                }
            }
            if(!c)
            {
                printf("ne trouve pas le liver");
            }
        }
