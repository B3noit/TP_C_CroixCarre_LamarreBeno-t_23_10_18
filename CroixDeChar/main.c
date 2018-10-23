#include <stdio.h>
#include <stdlib.h>



int main()
{
    //Bloc de déclaration et d'initialisation des variables
    int nTaille=1 ,nCptHauteur=1,nCptLargeur=1;
    char cCar='O';

    printf("Dessinons une croix, saisissez un caractere.\n");
    scanf("%c",&cCar);
    printf("Determinons sa taille, saisissez un entier.\n");
    scanf("%d",&nTaille);

    for(nCptHauteur=1;nCptHauteur<=nTaille;nCptHauteur++)
    {
        for(nCptLargeur=1;nCptLargeur<=nTaille;nCptLargeur++)
        {

            if (nCptHauteur==nCptLargeur || nCptHauteur==nTaille-nCptLargeur+1)

                printf("%c",cCar);

                else

                    printf(" ");


        }
        printf("\n");
    }

printf("Et voilà");

    return 0;
}
