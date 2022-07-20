#include<stdio.h>
#include<stdlib.h> //pour avoir la fonction rand, srand etc*
#include<time.h> //pour manipuler les fonction de temps

void plus_moins(int val_a_trouver, int choix_joueur)
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

	int val_a_trouver,choix_joueur;
	val_a_trouver= rand() %100 + 1;
	printf("Nombre généré %d ",val_a_trouver);

	do {
		printf("\nEntrez un nombre entre 1 et 100: \n ");
		scanf("%d", &choix_joueur);
		plus_moins(val_a_trouver,choix_joueur);

	}while(choix_joueur!=val_a_trouver);
}
