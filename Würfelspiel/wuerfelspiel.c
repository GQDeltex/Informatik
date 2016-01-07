#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int zahl;
	int zahl_summe;
	unsigned char ja_nein;
	int error;
	int win;
	int eingabe;
	int vorher;
	int high;
	int zaehler;
		
	printf("W""\x81""rfelspiel\n");
	printf("Ziel: Moeglichst viele Punkt erreichen\n");
	printf("Einmal w""\x81""rfeln: 1 bis maximal 6 Punkte\n");
	printf("Punkte werden addiert\n");
	printf("Bei ""\x81""berschreiten von 21 Punkten ist das Spiel verloren\n\n");
	printf("W""\x81""rfelspiel beginnen mit Eingabetaste\n");
	
	getchar();
	srand(time(0));
	system("cls");
	zahl_summe=0;
	error=0;
	win=0;
	vorher=0;
	high=0;
	
	do{	
		if (high<vorher){
			high=vorher;
		}
		
		zahl = rand();
		zahl = zahl%6+1;
		zahl_summe=zahl_summe+zahl;
		
		if(zahl_summe==0){
			break;
		}
		if(zahl_summe>21) {
			zahl_summe=0;
			error=error+1;
		}
		printf("_______________________________________________________________________________\n");
		printf("|Gewuerfelte Zahl| %d                                                          \n",zahl);
		printf("|----------------|-------------------------------------------------------------\n");
		printf("|Insgesamt       | %d                                                          \n",zahl_summe);
		printf("|----------------|-------------------------------------------------------------\n");
		printf("|Hoechste Zahl   | %d                                                          \n",high);
		printf("|----------------|-------------------------------------------------------------\n");
		printf("|Erspielte Punkte| %d                                                          \n",win);
		printf("|----------------|-------------------------------------------------------------\n");
		printf("|Verloren        | %d                                                          \n",error);
		printf("|----------------|-------------------------------------------------------------\n");
		printf("|                |Weiter wuerfeln?[0/1]                        [9 zum beenden] \n");
		printf("|------------------------------------------------------------------------------\n");
		scanf("%d",&eingabe);
		if (eingabe==0){
			if (high==21){
				if (high>zahl_summe){
					error=error+1;
				}
				else{
					win=win+1;
				}
			}
			else{
				if (high>zahl_summe){
					error=error+1;
				}
				else{
					win=win+1;
				}
			}
			vorher=zahl_summe;
			zahl_summe=0;
		}
		system("cls");
		
		
	}while (eingabe!=9);
	return 0;
}
