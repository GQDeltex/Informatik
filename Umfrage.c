#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int antwort;
	
	printf("Hallo, das ist ein kleines Spiel, mach einfach mit!\n");
	pause(1);
	printf("Und schon geht es Los!!\n");
	printf("Hier die Erste Frage![1 f�r 'ja', 0 f�r 'nein'\n");
	printf("Magst du Computer?\n");
	scanf("%d",&antwort);
	if (antwort==1){
		printf("Super! Nun zur 2.Frage:\n");
		printf("Wei�t du etwas ""\x81""ber Grafikkarten?\n");
		scanf("%d",&antwort);
		if (antwort==1){
			printf("Ok, dann zur naechsten Frage!\n");
			printf("Hast du eine Grafikkarte von Nvidia oder Amd?[1 f�r Nvidia, 0 f�r Amd]\n");
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
	
