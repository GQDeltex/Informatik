#include <stdio.h>
#include <stdlib.h>

int anmelden(){
	char login[20];
	char pass[20];
	char name[20]="peter";
	char kennw[20]="kakadu";
	int zaehler;
	
	system("cls");
	printf("Login:");
	scanf("%s",&login);
	printf("\n");
	if (strcmp(name,login)==0){
		zaehler=0;
		do{
			printf("Password:");
			scanf("%s",&pass);
			zaehler=zaehler+1;
			if (strcmp(pass,kennw)!=0){
				printf("noch %d versuch(e)\n",3-zaehler);
			}
			if (zaehler==3){
				printf("Passwort 3 mal falsch eingegeben Rechner wird nun heruntergefahren.\n");
				printf("                                                                               \n");
				printf("                         |     |                                               \n");
				printf("                           ___                                                 \n");
				printf("                          /   \\                                                \n");
				printf("                                                                               \n");
				sleep(3);
				herunterfahren();
				return 0;
			}
			
		}while(strcmp(pass,kennw)!=0);
		printf("Sie sind nun eingeloggt!");
		sleep(3);
		wartezeit();
		printf("                                                                               \n");
		printf("                                                                               \n");
		printf("                                                                               \n");
		printf("                                       Welcome back %s !                       \n",login);
		printf("                                                                               \n");
		printf("                   _____                                                       \n");
		printf("                   |-_-|                                                       \n");
		printf("                   |___|                                                       \n");
		printf("                     |   |_|                                                   \n");
		printf("                  ___|___ |                                                    \n");
		printf("                  |     |/                                                     \n");
		printf("                 /|     |                                                      \n");
		printf("                | |     |                                                      \n");
		printf("                _ |_____|                                                      \n");
		printf("               / ||  |  |                                                      \n");
		printf("                  |  |  |                                                      \n");
		printf("                  |  |  |                                                      \n");
		printf("                 _|  |  |_                                                     \n");
		printf("                |____|____|                                                    \n");
		printf("                                                                               \n");
		printf("                                                                               \n");
		printf("                                                                               \n");
		sleep(5);
		system("cls");
		input();
		return 0;
	}
	else{
		printf("ERROR\n");
		printf("Dieser Benutzername existiert nicht!");
		sleep(5);
		herunterfahren();
		return 0;
	}
	
}
