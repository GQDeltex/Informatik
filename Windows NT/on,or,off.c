#include <stdio.h>
#include <stdlib.h>

int hochfahren(){
	int zaehler;
	zaehler=0;
	do{
		system("cls");
		printf("Hochfahren");
		printf(".");
		sleep(1);
		printf(".");
		sleep(1);
		printf(".\n");
		sleep(1);
		zaehler=zaehler+1;
	}while(zaehler<4);
	system("cls");
}

int herunterfahren(){
	int zaehler;
	zaehler=0;
	do{
		system("cls");
		printf("Herunterfahren");
		printf(".");
		sleep(1);
		printf(".");
		sleep(1);
		printf(".\n");
		sleep(1);
		zaehler=zaehler+1;
	}while(zaehler<4);
	system("cls");
}
