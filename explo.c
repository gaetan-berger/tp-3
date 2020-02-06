#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

	struct lieu {
		char description[50];
		char difficulte[50];
		int tableauID;
	};

int main ()
{
	
	struct lieu lieu1;
	struct lieu lieu2;
	struct lieu lieu3;
	
// ---------------- lieu 1 ------------------------
	
	strcpy (lieu1.description, "Debut, ici vous etes en securité. ");
	strcpy (lieu1.difficulte,"0");
	lieu1.tableauID = 1;
	
	printf ("le monde de dessus chap 1 : %s\n", lieu1.description);
	printf ("la difficulte de ce niveau es de : %s\n", lieu1.difficulte);
	printf ("le monde de dessus chap 1 a pour ID : %d\n", lieu1.tableauID);
	
// ---------------- lieu 2 ------------------------	
	
	strcpy (lieu2.description, "Grotte, fait attention pourrais perdre tes jambes. ");
	strcpy (lieu2.difficulte,"9");
	lieu2.tableauID = 2;
	
	printf ("le monde du milieu chap 2 : %s\n", lieu2.description);
	printf ("la difficulte de ce niveau es de : %s\n", lieu2.difficulte);
	printf ("le monde du milieu chap 2 a pour ID : %d\n", lieu2.tableauID);
	
// ---------------- lieu 3 ------------------------	

	strcpy (lieu3.description, "enfer, tu sais que tu n'est pas fait pour etre ici.");
	strcpy (lieu3.difficulte,"19");
	lieu3.tableauID = 3;
	
	printf ("le monde du dessous chap 3 : %s \n", lieu3.description);
	printf ("la difficulte de ce niveau es de : %s \n", lieu3.difficulte);
	printf ("le monde du dessous chap 3 a pour ID : %d \n", lieu3.tableauID);
		
	
	char choix[4];
	char debut[6] = "debut";
	char milieu[7] = "milieu";
	char enfer[6] = "enfer";
	int choixDeplacements = 0;
	int fin = 0;
	


		printf ("bienvenue aventurier ou veux tu aller ? \n Tapez 'debut' pour aller au monde de dessus \n tapez 'milieu' pour aller monde du milieu  \n tapez 'enfer' pour aller monde du dessous  \n\n");
		scanf ("%s", choix);
	while (fin == 0){
		choixDeplacements=0;
		if(strcmp(choix, "debut") == 0){
				printf ("Vous voila dans le monde de dessus ! %s \n",  lieu1.description);
				printf ("souhaitez-vous changer de lieu ? \n oui .1\n non .2\n");
				scanf ("%d", &choixDeplacements);
	
			while (choixDeplacements !=1 && choixDeplacements !=2)
			{
				printf ("Tapez le numero pour savoir si vous voulez partir  \n");
				scanf ("%d", &choixDeplacements);
			}
	
			if (choixDeplacements == 1)
			{
				printf ("ou voulez vous aller ?\n 1. milieu\n 2. enfer\n ");
				scanf ("%s", choix);
			}
	
			if (choixDeplacements == 2) 
			{
				printf ("pas de soucis bonne journée aventurier \n");
			}
		}	
			
			
			
			choixDeplacements=0;
		if (strcmp(choix, "milieu") == 0){
				printf ("Vous voila dans le monde du milieu ! %s\n ", lieu2.description);
				printf ("souhaitez-vous changer de lieu ? \n oui .1\n non .2\n");
				scanf ("%d", &choixDeplacements);
	
			while (choixDeplacements !=1 && choixDeplacements !=2)
			{
				printf ("Tapez le numero pour savoir si vous voulez partir  \n");
				scanf ("%d", &choixDeplacements);
			}
	
			if (choixDeplacements == 1)
			{
				printf ("ou voulez vous aller ?\n 1. debut\n 2. enfer\n ");
				scanf ("%s", choix);
			}
	
			if (choixDeplacements == 2) 
			{
				printf ("pas de soucis bonne chance aventurier \n");
			}
		}
		choixDeplacements=0;
		if (strcmp(choix, "enfer") == 0){
			printf ("Vous voila dans le monde de dessous ! %s  \n ",  lieu3.description);
			printf ("souhaitez-vous changer de lieu ? \n oui .1\n non .2\n");
			scanf ("%d", &choixDeplacements);
	
			while (choixDeplacements !=1 && choixDeplacements !=2)
			{
				printf ("Tapez le numero pour savoir si vous voulez partir  \n");
				scanf ("%d", &choixDeplacements);
			}
	
			if (choixDeplacements == 1)
			{
				printf ("ou voulez vous aller ?\n 1. debut\n 2. milieu\n ");
				scanf ("%s", choix);
			}
	
			if (choixDeplacements == 2) 
			{
				printf ("ahaha, vous etes tombez bien bas ahaha \n");
			}
		}
	}		
	return 0;
}