#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main ()
{
	
	int choixDeplacements = 0;

	printf("bienvenue aventurier ou veux tu aller \n 1 le monde de dessus /  2 le monde du dessous \n a vous de choisir ! ");
	scanf ("%d", &choixDeplacements);
	
	while (choixDeplacements !=1 && choixDeplacements !=2)
	{
		printf ("Tapez le numero de la destination voulue : \n");
		scanf ("%d", &choixDeplacements);
	}
	
	if (choixDeplacements == 1)
	{
		printf ("Vous voila dans le monde de dessus ! \n");
	}
	
	if (choixDeplacements == 2) 
	{
		printf ("Vous voila dans le monde du dessous ! \n");
	}
		
	
	return 0;
}
