#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int antwort;
	
	printf("Hallo, das ist ein Windows NT emulator, bitte sei auf lange Wartezeiten gefasst!\n");
	printf("Drücken sie die 1 um zu starten:\n");
	scanf("%d",&antwort);
	if (antwort==1){
		printf("Und los gehts!");
		sleep(3);
		hochfahren();
		return 0;
	}
	else{
		return 0;
	}
}
