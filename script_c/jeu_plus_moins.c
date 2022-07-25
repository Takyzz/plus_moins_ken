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
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
}

void  main()
{
	srand(time(NULL)); //pour baser la génération sur l'horloge interne du pc, ainsi le chiffre sera vraiment random

	int val_a_trouver1,choix_joueur1,coups1,val_a_trouver2,choix_joueur2,coups2,tours,points1,points2;
	points1=0;
	points2=0;
	//code de boucle pour les tours
	printf("Veuillez insérer le nombre de tours à jouer: ");
	scanf("%d", &tours);
	int k=0;
	do {
	//code pour joueur 1
		printf("======================================================================");
		int i=0;
		val_a_trouver1= rand() %100 + 1;

		printf("\n\nNombre généré %d ",val_a_trouver1);

		printf("\nJoueur 2, combien de coups doit le joueur 1 battre? ");
		scanf("%d,", &coups1);
		if (coups1<11)
			{
			printf("Il faut y avoir plus de 10 coups:");
			scanf("%d", &coups1);
			}
		do
		{
			printf("\nEntrez un nombre entre 1 et 100: ");
      	        	scanf("%d", &choix_joueur1);
                	plus_moins(val_a_trouver1,choix_joueur1);
			i++;
			if(choix_joueur1==val_a_trouver1)
				break;
		}while(i<coups1);

		points1=points1+(coups1-i);
		printf("\nj1 Vous avez obtenu %d points", points1);
		printf("\n=====================================================================");

	//code pour joueur 2
		int j=0;
		val_a_trouver2= rand() %100 + 1;

	        printf("\n\nNombre généré %d ",val_a_trouver2);

        	printf("\nJoueur 1, combien de coups doit le joueur 2 battre? ");
       		scanf("%d,", &coups2);

		if (coups2	<11)
			{
			printf("Il faut y avoir plus de 10 coups:");
			scanf("%d", &coups2);
			};
        	do
        	{
        	        printf("\nEntrez un nombre entre 1 et 100: ");
        	        scanf("%d", &choix_joueur2);
        	        plus_moins(val_a_trouver2,choix_joueur2);
        	        j++;
        	        if(choix_joueur2==val_a_trouver2)
        	                break;
        	}while(j<coups2);
        	points2=points2+(coups2-j);
        	printf("\nj2 Vous avez obtenu %d points", points2);
		k++;
		printf("\n======================================================================");

	}while(k<tours);
	printf("\nFin de la partie!");
	printf("\nLes scores sont %d : %d \n", points1, points2);
	if (points1>points2)
		printf("Le gagnant est le joueur 1! Bravo");
	else if (points2>points1)
		printf("Le gagnant est le joueur 2! Bravo!");
	else
		printf("Et bah vous êtes fort.. Egalité!! :o");
	printf("\n==++==++==++==++==++==++==++==++==++==++==++==++==++==++==++==++==++==++==++==");
}
