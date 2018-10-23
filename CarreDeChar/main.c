#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Bloc de déclaration et d'initialisation des variables.
    int nTaille=1 ,nCptHauteur=1,nCptLargeur=1;
    char cCar='O',cCarPlein='H';


    printf("Dessinons un carre, saisissez deux caractere.\n");
    scanf("%c",&cCar);
    fflush(stdin);
    printf("le second :\n");
    scanf("%c",&cCarPlein);
    printf("Determinons sa taille, saisissez un entier.\n");
    scanf("%d",&nTaille);

    for (nCptHauteur=1;nCptHauteur<=nTaille;nCptHauteur++)
    {
        for (nCptLargeur=1;nCptLargeur<=nTaille;nCptLargeur++)
        {

        if(nCptHauteur==1 || nCptHauteur==nTaille ||nCptLargeur==1||nCptLargeur==nTaille)
            {
            printf("%c",cCar);
             }else
                {
                printf("%c",cCarPlein);
                }
        }
         printf("\n");

    }


printf("Et voila");




    return 0;
}
