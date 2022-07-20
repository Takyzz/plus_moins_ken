#include<stdio.h>

void plus_moins(int val_a_trouver, int choix_joueur)
{
	if(choix_joueur<val_a_trouver)
		printf("Le nombre est plus grand!");
	else if(choix_joueur>val_a_trouver)
		printf("Le nombre est plus petit!");
	else
		printf("Bingo!!!\n");
}

void  main()
{
	int val_a_trouver=6;
	int choix_joueur;
	printf("Entrez un nombre entre 1 et 10: ");
	scanf("%d", &choix_joueur);
	plus_moins(val_a_trouver,choix_joueur);
}
