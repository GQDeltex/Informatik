#include <stdio.h>
#include <stdlib.h>

int hilfe(){
	char enter[2]="q";
	char antwort[2];
	printf("Hilfe:\n");
	printf("Dr�cken sie 'h' um diesen Hilfescreen anzuzeigen\n");
	printf("Dr�cken sie 'e' um herunterzufahren\n");	
	printf("Dr�cken sie 'l' um den Login screen wieder aufzurufen\n");
	printf("Dr�cken sie 'b' um ein Bild anzuzeigen\n");
	printf("'q' zum beenden dises Hilfescreens\n\n");
	scanf("%s",&antwort);
	if (strcmp(antwort, enter)==0){
		printf("Schliessen!");
		sleep(3);
		input();
	}
}

int input(){
		char eingabe[2];
		printf("C:\\");
		printf("F�r Hilfe 'h' druecken\n");
		printf("C:\\");
		scanf("%s",&eingabe);
		switch (eingabe[0]){
			case 'h':
				hilfe();
				
			case 'e':
				herunterfahren();
				
			case 'l':
				anmelden();
			
			case 'b':
				bild();
			
			default:
				hilfe();
		}
	
		
	return 0;
}
