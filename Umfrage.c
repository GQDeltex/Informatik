#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int antwort;
	
	printf("Hallo, das ist ein kleines Spiel, mach einfach mit!\n");
	pause(1);
	printf("Und schon geht es Los!!\n");
	printf("Hier die Erste Frage![1 für 'ja', 0 für 'nein'\n");
	printf("Magst du Computer?\n");
	scanf("%d",&antwort);
	if (antwort==1){
		printf("Super! Nun zur 2.Frage:\n");
		printf("Weißt du etwas ""\x81""ber Grafikkarten?\n");
		scanf("%d",&antwort);
		if (antwort==1){
			printf("Ok, dann zur naechsten Frage!\n");
			printf("Hast du eine Grafikkarte von Nvidia oder Amd?[1 für Nvidia, 0 für Amd]\n");
			scanf("%d",&antwort);
			if (antwort==1){
				printf("Toll gemacht, Alle fragen beantwortet!\n");
			}
			
			else(){
				printf("Tja dumm gelaufen!");
				retunr 0;
			}
		}
		
		else(){
			printf("Dann solltest du mal im Internet nachschuen!\n");
		}
	}
	
	
	return 0;
}
	
