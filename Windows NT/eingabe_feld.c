#include <stdio.h>
#include <stdlib.h>

int input(){
	char eingabe[2];
	printf("C:\\");
		system("cls");
		printf("C:\\");
		scanf("%s",&eingabe);
		switch (eingabe[0]){
			case 'e':
				herunterfahren();
				
			case 'l':
				anmelden();
			
			case 'b':
				bild();
			
			default:
				input();
		}
	
		
	return 0;
}
