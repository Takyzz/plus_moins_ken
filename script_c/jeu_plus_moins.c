#include<stdio.h>
#include<stdlib.h> //pour avoir la fonction rand, srand etc*
#include<time.h> //pour manipuler les fonction de temps

void plus_moins(int val_a_trouver, int choix_joueur,char choix_diff)
{
	if(choix_joueur<val_a_trouver)
		printf("Le nombre est plus grand!\n");
	else if(choix_joueur>val_a_trouver)
		printf("Le nombre est plus petit!\n");
	else
		printf("Bingo!!!\n");
}

void  main()
{
	srand(time(NULL)); //pour baser la génération sur l'horloge interne du pc, ainsi le chiffre sera vraiment random

	int val_a_trouver,choix_joueur,nombre_essaie;
	char choix_diff;
	int i=1;
	val_a_trouver= rand() %100 + 1;
	printf("Nombre généré %d ",val_a_trouver);

	printf("Choisissez votre niveau de difficulté;");
	printf("\nFacile(f): essaie illimités. \nMoyen(m): 25 essaies. \nDifficile(d): 10 essaies.");
	printf("\nVotre choix: ");
	scanf("%s,", &choix_diff);

	if(choix_diff=='f') {
		do {
			printf("\nEntrez un nombre entre 1 et 100: \n ");
			scanf("%d", &choix_joueur);
			plus_moins(val_a_trouver,choix_joueur,choix_diff);

		}while(choix_joueur!=val_a_trouver);
	}
	else if(choix_diff=='m')
	{	do {
			printf("\nEntrez un nombre entre 1 et 100: \n ");
                        scanf("%d", &choix_joueur);
                        plus_moins(val_a_trouver,choix_joueur,choix_diff);
			i++;
		}while(i<26);
	}
	else if(choix_diff=='d')
        {
		do {
                        printf("\nEntrez un nombre entre 1 et 100: \n ");
                        scanf("%d", &choix_joueur);
                        plus_moins(val_a_trouver,choix_joueur,choix_diff);
			i++;
		}while(i<11);
	}

}
