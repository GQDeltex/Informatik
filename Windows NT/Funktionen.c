#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int datei_GUI() {
	system("color 02");
	int i;
	char eingabe;
	char schreiben[50];
	int text;
	char temp;
	char dateien[20];
	
	text=1;
	
	FILE *fp;
	
	do{
	printf("Datei schreiben oder lesen? [1/0]		9 zum Beenden\n");
	scanf("%s",&eingabe);
	switch(eingabe){
		case'1':
			if(fp==NULL){
				printf("Error");
			}
			else{
				printf("Dateiname:\n");
				scanf("%s",&dateien);
				printf("\n");
				fp = fopen(dateien,"w");
				printf("Text Eingeben:\n\n");
				scanf("%s",&schreiben);
				printf("\n");
				fprintf(fp, schreiben);
				printf("Erfolgreich '%s' geschrieben.\n", schreiben);
				fclose(fp);
				datei_GUI();
			}
		
		case'0':
			if(fp==NULL){
				printf("Error");
			}
			else{
				printf("Dateiname:\n");
				scanf("%s",&dateien);
				printf("\n");
				printf("Datei %s geoeffnet\n",dateien);
				fp = fopen(dateien,"r");
				while(fscanf(fp,"%c",&temp)!=EOF){
					printf("%c",temp);
				}
				printf("\n");
				fclose(fp);
				datei_GUI();
			}
		
		case '9':
			input();
		
		default:
			datei_GUI();
	}
	}while(1>0);
}

int spiel() {
	system("color 02");
	
	int zahl;
	int zahl_summe;
	unsigned char ja_nein;
	int error;
	int win;
	int eingabe;
	int vorher;
	int high;
	int zaehler;
		
	printf("W""\x81""rfelspiel\n");
	printf("Ziel: Moeglichst viele Punkt erreichen\n");
	printf("Einmal w""\x81""rfeln: 1 bis maximal 6 Punkte\n");
	printf("Punkte werden addiert\n");
	printf("Bei ""\x81""berschreiten von 21 Punkten ist das Spiel verloren\n\n");
	printf("W""\x81""rfelspiel beginnen mit Eingabetaste\n");
	
	getchar();
	srand(time(0));
	system("cls");
	zahl_summe=0;
	error=0;
	win=0;
	vorher=0;
	high=0;
	
	do{	
		if (high<vorher){
			high=vorher;
		}
		
		zahl = rand();
		zahl = zahl%6+1;
		zahl_summe=zahl_summe+zahl;
		
		if(zahl_summe==0){
			break;
		}
		if(zahl_summe>21) {
			zahl_summe=0;
			error=error+1;
		}
		printf("_______________________________________________________________________________\n");
		printf("|Gewuerfelte Zahl| %d                                                          \n",zahl);
		printf("|----------------|-------------------------------------------------------------\n");
		printf("|Insgesamt       | %d                                                          \n",zahl_summe);
		printf("|----------------|-------------------------------------------------------------\n");
		printf("|Hoechste Zahl   | %d                                                          \n",high);
		printf("|----------------|-------------------------------------------------------------\n");
		printf("|Erspielte Punkte| %d                                                          \n",win);
		printf("|----------------|-------------------------------------------------------------\n");
		printf("|Verloren        | %d                                                          \n",error);
		printf("|----------------|-------------------------------------------------------------\n");
		printf("|                |Weiter wuerfeln?[0/1]                        [9 zum beenden] \n");
		printf("|------------------------------------------------------------------------------\n");
		scanf("%d",&eingabe);
		if (eingabe==0){
			if (high==21){
				if (high>zahl_summe){
					error=error+1;
				}
				else{
					win=win+1;
				}
			}
			else{
				if (high>zahl_summe){
					error=error+1;
				}
				else{
					win=win+1;
				}
			}
			vorher=zahl_summe;
			zahl_summe=0;
		}
		system("cls");
		
		
	}while (eingabe!=9);
	input();
}

	int links(){
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
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
	sleep(1);
	system("cls");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                    _____                                                      \n");
	printf("                    |._.|                                                      \n");
	printf("                    |___|                                                      \n");
	printf("                      /   |_/                                                  \n");
	printf("                  ___|___ |                                                    \n");
	printf("                  |     |/                                                     \n");
	printf("                 /|     |                                                      \n");
	printf("                | |     |                                                      \n");
	printf("                _ |_____|                                                      \n");
	printf("               | ||  |  |                                                      \n");
	printf("                  |  |  |                                                      \n");
	printf("                  |  |  |                                                      \n");
	printf("                 _|  |  |/|                                                    \n");
	printf("                |____|___/                                                     \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	sleep(1);
	system("cls");
	}
	
	int mitte(){
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                 _____                                         \n");
	printf("                                 |-_-|                                         \n");
	printf("                                 |___|                                         \n");
	printf("                                   |   |_|                                     \n");
	printf("                                ___|___ |                                      \n");
	printf("                                |     |/                                       \n");
	printf("                               /|     |                                        \n");
	printf("                              | |     |                                        \n");
	printf("                              _ |_____|                                        \n");
	printf("                             / ||  |  |                                        \n");
	printf("                                |  |  |                                        \n");
	printf("                                |  |  |                                        \n");
	printf("                               _|  |  |_                                       \n");
	printf("                              |____|____|                                      \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	sleep(1);
	system("cls");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                  _____                                        \n");
	printf("                                  |._.|                                        \n");
	printf("                                  |___|                                        \n");
	printf("                                    /  |_/                                     \n");
	printf("                                ___|___ |                                      \n");
	printf("                                |     |/                                       \n");
	printf("                               /|     |                                        \n");
	printf("                              | |     |                                        \n");
	printf("                              _ |_____|                                        \n");
	printf("                             | ||  |  |                                        \n");
	printf("                                |  |  |                                        \n");
	printf("                                |  |  |                                        \n");
	printf("                               _|  |  |/|                                      \n");
	printf("                              |____|____/                                      \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	sleep(1);
	system("cls");
	}
	
	int rechts(){
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                              _____                            \n");
	printf("                                              |._.|                            \n");
	printf("                                              |___|                            \n");
	printf("                                                /  |_/                         \n");
	printf("                                            ___|___ |                          \n");
	printf("                                            |     |/                           \n");
	printf("                                           /|     |                            \n");
	printf("                                          | |     |                            \n");
	printf("                                          _ |_____|                            \n");
	printf("                                         | ||  |  |                            \n");
	printf("                                            |  |  |                            \n");
	printf("                                            |  |  |                            \n");
	printf("                                           _|  |  |/|                          \n");
	printf("                                          |____|___/                           \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	sleep(1);
	system("cls");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                             _____                             \n");
	printf("                                             |-_-|                             \n");
	printf("                                             |___|                             \n");
	printf("                                               |   |_|                         \n");
	printf("                                            ___|___ |                          \n");
	printf("                                            |     |/                           \n");
	printf("                                           /|     |                            \n");
	printf("                                          | |     |                            \n");
	printf("                                          _ |_____|                            \n");
	printf("                                         / ||  |  |                            \n");
	printf("                                            |  |  |                            \n");
	printf("                                            |  |  |                            \n");
	printf("                                           _|  |  |_                           \n");
	printf("                                          |____|____|                          \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	printf("                                                                               \n");
	sleep(1);
	system("cls");
	}

int bild() {
	system("color 02");
	int antwort;
	int zufall;
	
	srand(time(0));
	zufall = rand();
	zufall = zufall%6+1;
	
	
		links();
		links();
		links();
		links();
		mitte();
		mitte();
		rechts();
		if (zufall==3){
			bluescreen();
		}
		rechts();
		rechts();
		rechts();
		mitte();
		mitte();
		system("cls");
		printf("Weiter[1/0]");
		scanf("%d",&antwort);
		if (antwort==1){
			bild();
		}
		else{
		system("cls");
		input();
		}
		return 0;
}

int anmelden(){
	system("color 02");
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
				printf("Passwort 3 mal falsch eingegeben.Lange kannst du das nicht mehr machen\n");
				printf("                                                                               \n");
				printf("                         |     |                                               \n");
				printf("                           ___                                                 \n");
				printf("                          /   \\                                                \n");
				printf("                                                                               \n");
				sleep(3);
				anmelden();
				return 0;
			}
			
		}while(strcmp(pass,kennw)!=0);
		printf("Sie werden nun eingeloggt!");
		sleep(3);
		wartezeit(1);
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
		anmelden();
		return 0;
	}
	
}

int hilfe(){
	system("color 02");
	char enter[2]="q";
	char antwort[2];
	printf("Hilfe:\n");
	printf("Drücken sie 'h' um diesen Hilfescreen anzuzeigen\n");
	printf("Drücken sie 'e' um herunterzufahren\n");	
	printf("Drücken sie 'l' um sich auszuloggen\n");
	printf("Drücken sie 'b' um ein Bild anzuzeigen\n");
	printf("Drücken sie 's' um ein Wuerfelspiel zu starten\n");
	printf("Drücken sie 'd' um einen datei editor zu öffnen\n");
	input();
}

int input(){
	system("color 02");
		char eingabe[2];
		
		printf("C:\\");
		scanf("%s",&eingabe);
		switch (eingabe[0]){
			case 'h':
				hilfe();
				
			case 'e':
				herunterfahren();
				
			case 'l':
				printf("Sie werden nun ausgeloggt");
				sleep(3);
				wartezeit(1);
				anmelden();
			
			case 'b':
				bild();
			
			case 's':
				spiel();
			
			case 'd':
				datei_GUI();
			
			case '9':
				bluescreen();
				return 0;
			
			default:
				hilfe();
		}
	
		
	return 0;
}

int hochfahren(){
	system("color 02");
	system("cls");
	printf("Hochfahren");
	printf("[--------------------]");
	sleep(1);
	system("cls");
	printf("Hochfahren");
	printf("[##------------------]");
	sleep(1);
	system("cls");
	printf("Hochfahren");
	printf("[####----------------]");
	sleep(1);
	system("cls");
	printf("Hochfahren");
	printf("[######--------------]");
	sleep(1);
	system("cls");
	printf("Hochfahren");
	printf("[########------------]");
	sleep(1);
	system("cls");
	printf("Hochfahren");
	printf("[##########----------]");
	sleep(1);
	system("cls");
	printf("Hochfahren");
	printf("[############--------]");
	sleep(1);
	system("cls");
	printf("Hochfahren");
	printf("[##############------]");
	sleep(1);
	system("cls");
	printf("Hochfahren");
	printf("[################----]");
	sleep(1);
	system("cls");
	printf("Hochfahren");
	printf("[##################--]");
	sleep(1);
	system("cls");
	printf("Hochfahren");
	printf("[####################]");
	sleep(1);
	system("cls");
	anmelden();
}

int herunterfahren(){
	system("color 02");
	system("cls");
	printf("Herunterfahren");
	printf("[--------------------]");
	sleep(1);
	system("cls");
	printf("Herunterfahren");
	printf("[##------------------]");
	sleep(1);
	system("cls");
	printf("Herunterfahren");
	printf("[####----------------]");
	sleep(1);
	system("cls");
	printf("Herunterfahren");
	printf("[######--------------]");
	sleep(1);
	system("cls");
	printf("Herunterfahren");
	printf("[########------------]");
	sleep(1);
	system("cls");
	printf("Herunterfahren");
	printf("[##########----------]");
	sleep(1);
	system("cls");
	printf("Herunterfahren");
	printf("[############--------]");
	sleep(1);
	system("cls");
	printf("Herunterfahren");
	printf("[##############------]");
	sleep(1);
	system("cls");
	printf("Herunterfahren");
	printf("[################----]");
	sleep(1);
	system("cls");
	printf("Herunterfahren");
	printf("[##################--]");
	sleep(1);
	system("cls");
	printf("Herunterfahren");
	printf("[####################]");
	sleep(1);
	system("cls");
	main();	
}

int wartezeit(laenge){
	system("color 02");
	int zaehler;
	zaehler=0;
	do{
		system("cls");
		printf("Der Vorgang wird bearbeitet!");
		printf(".");
		sleep(laenge);
		printf(".");
		sleep(laenge);
		printf(".");
		sleep(laenge);
		zaehler=zaehler+1;
	}while(zaehler<4);
	system("cls");
}

int bluescreen(){
	system("cls");
	system("color 9F");
	printf("Your Computer has been shut down to prevent Damage.\n");
	printf("Please be kind an accept that Windows is not the best Operating\nSystem in the World.\n");
	sleep(1);
	return 0;
}
	
int write(char dateien[32], char schreiben[]){
	FILE *fp;
	if(fp==NULL){
	}
	else{
		fp = fopen(dateien,"w");
		fprintf(fp, schreiben);
		fclose(fp);
	}
}
	
char read(char dateien[32]/*return character array*/){
	char temp;
	char output;
	FILE *fp;
	if(fp==NULL){
	}
	else{
		fp = fopen(dateien,"r");
		while(fscanf(fp,"%c",&temp)!=EOF){
		output=temp+output;
		}
		fclose(fp);
	}
	return output;
}
