#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int zahl;
	int zahl_gesucht;
	int durchgang;
		
	srand(time(0));
	zahl_gesucht=rand();
	zahl_gesucht=zahl_gesucht%50;
	durchgang = 0;
	
	do{
		durchgang++;
		if (durchgang>1){
			printf("Tja, die Zahl war's nich!\n");
		}
		else {
			printf("Hier musst du ne Zahl erraten also los!!!\n");
		}
		printf("Gib ne Zahl zwischen 0 und 50 ein:\n");
		scanf("%d",&zahl);
		if (zahl<zahl_gesucht) printf("die is zu klein!\n");
		if (zahl>zahl_gesucht) printf("die is zu groﬂ!\n");
		printf("\n");
	}while (zahl!=zahl_gesucht);
	printf("Endlich hastes jeschafft!!\n");
	
	getchar();
	
	return 0;
}
