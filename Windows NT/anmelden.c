#include <stdio.h>
#include <stdlib.h>

int anmelden(){
	char login[20];
	char pass[20];
	char peter[20];
	char kakadu[20];
	
	scanf("%s",&peter);
	scanf("%s",&kakadu);
	//peter="peter";
	system("cls");
	printf("Login:");
	scanf("%s",&login);
	printf("\n");
	if (login=="%s",&peter){
		do{
			printf("Password:");
			scanf("%s",&pass);
		}while(pass!="%s",&kakadu);
		wartezeit();
		printf("Funzt");
	}
	else{
		printf("ERROR\n");
		printf("Dieser Benutzername existiert nicht!");
		return 0;
	}
	
}
