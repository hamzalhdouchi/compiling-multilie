#include "mini.h"

int main()
{
    int n;
    int cont=0;
     do{
       printf("**********************************************\n");
       printf("*                   minu                     *\n");
       printf("**********************************************\n");
       printf("1 : ajouter un liver au stock\n");
       printf("2 : afficher tout les livers disponibel\n");
       printf("3 : rechercher un liver\n");
       printf("4 : mettre a jour la quantite dun stock\n");
       printf("5 : supprimer un liver du stock\n");
       printf("6 : afficher le nombre total de livers en stock\n");
       printf("7 : exite le programme \n");
       printf("saisisse votre choix : ");
       scanf("%d",&n);

       switch(n)
       {
       case 1:
        ajouter(cont);
        break;
       case 2:
          afficher(cont);
          break;
       case 3:
        recherch(cont);
        break;
       case 4:
        mettre(cont);
        break;
       case 5:
        suprimer(cont);
        break;
       case 6:
        nbt(cont);
       case 7:
        printf("exite le programme");
        break;
       }
       }while(n!=7);


    return 0;
}
