#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int zahl;
	int zahl_summe;
	unsigned char ja_nein;
	
	printf("W""\x81""rfelspiel\n");
	printf("Ziel: Moeglichst viele Punkt erreichen\n");
	printf("Einmal w""\x81""rfeln: 1 bis maximal 6 Punkte\n");
	printf("Punkte werden addiert\n");
	printf("Bei ""\x81""berschreiten von 21 Punkten ist das Spiel verloren\n\n");
	printf("W""\x81""rfelspiel beginnen mit Eingabetaste\n");
	
	getchar();
	srand(time(0));
	zahl_summe=0;
	zahl = rand();
	zahl = zahl%6+1;
	
	do
	{
		zahl_summe=zahl_summe+zahl;
		printf ("Gew""\x81""rfelte Zahl %d \n",zahl);
		if(zahl_summe>21) {zahl_summe = 0;printf("Verloren, du Opfer!\n"); }
		if(zahl_summe==0)break;
		printf("Erreichte Punktzahl bisher: %d\n",zahl_summe);
		printf("Weiterw""\x81""rfeln ('Enter' um weiter zu spielen ,'c' zum beenden)\n\n");
		zahl = rand();
		zahl = zahl%6+1;
		ja_nein = getch();
	}while(ja_nein==13);
	
	printf("Ergebnis:%d\n",zahl_summe);
	
	return 0;
}
