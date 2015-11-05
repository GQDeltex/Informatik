#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	int zahl;
	int zahl_1;
	int zahl_2;
	int zahl_3;
	int ja_nein;
	int durchgang;
	
	do 
	{
	printf("Gib eine Zahl ein und dieses Programm berechnet dir\n");
	printf("die Fakultaet der Zahl\n");
	printf("Zahl: ");
	scanf("%d",&zahl);
	if (zahl==0) break;
	durchgang=0;
	
	zahl_1=zahl;
	zahl_2=zahl_1-1;
	do
	{
	zahl_3=zahl_1*zahl_2;
	zahl_1=zahl_3;
	zahl_2=zahl_2-1;
	durchgang=durchgang+1;
	}while (zahl_2>1);
	
	printf("Deine Zahl ist: %d\n",&zahl_3);
	printf("\n");
	printf("Um das Programm zu stoppen druecken sie die 0\n");
	printf("Wenn sie weiter machen wollen druecken sie die 1\n");
	scanf("%d",&ja_nein);
	
	}while (ja_nein==1);
	
	return 0;
}
