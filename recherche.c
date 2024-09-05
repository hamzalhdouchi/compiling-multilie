#include "mini.h"

void recherch(int cont)
        {
            char nm[20];
            int i;
            int f = 0;
            printf("\n");
       printf("==============================================\n");
       printf("**********************************************\n");
       printf("*                   RECHERCH                 *\n");
       printf("**********************************************\n");
            printf("entre le num de livre :");
            scanf(" %[^\n]",nm);
            for(i=0;i<cont;i++)
            {
                if(strcmp(livers[i].T,nm)==0){
                        printf("\n");
            printf("liver trouve %s   %s   %.2f  %d\n",livers[i].T,livers[i].A,livers[i].prix,livers[i].quantite);
            printf("\n");
            f=1;
            break;
                }
            }
            if(!f)
                printf("ne pas c est liver ");
        }
