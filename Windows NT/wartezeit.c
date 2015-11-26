#include <stdio.h>
#include <stdlib.h>

int wartezeit(){
	int zaehler;
	zaehler=0;
	do{
		system("cls");
		printf("Der Vorgang wird bearbeitet!");
		printf(".");
		sleep(1);
		printf(".");
		sleep(1);
		printf(".");
		sleep(1);
		zaehler=zaehler+1;
	}while(zaehler<4);
	system("cls");
}
