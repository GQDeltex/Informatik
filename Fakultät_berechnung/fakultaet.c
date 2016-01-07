#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	int zahl;
	int end_zahl;
	int i;
	int ja_nein;
	
	do 
	{
	printf("Gib eine Zahl ein und dieses Programm berechnet dir\n");
	printf("die Fakultaet der Zahl\n");
	printf("Zahl: ");
	scanf("%d",&zahl);
	if (zahl==0) break;

	for (i=0; i<zahl; i++){
		end_zahl=zahl*i;
	}
	
	printf("Deine Zahl ist: %d\n",end_zahl);
	printf("\n");
	printf("Um das Programm zu stoppen druecken sie die 0\n");
	printf("Wenn sie weiter machen wollen druecken sie die 1\n");
	scanf("%d",&ja_nein);
	
	}while (ja_nein==1);
	
	return 0;
}
