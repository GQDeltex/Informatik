#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int zahl;																				//die Variable 'zahl' einf�hren.
	char name[20];																			//die Variable 'name' f�r den Name einf�hren.
	
	printf("Hallo, heute frage ich dich nach einer Zahl:\n");								//formatierten text mit 'printf' ausgeben.
	printf("Zahl:");
	scanf("%d",&zahl);																		//eingabe fordern und die eingabe als zahl in der variable zahl speichern.
	printf("\n");
	
	if (zahl == 42){																		//'if' anweisungen werden nur ausgef�hrt wenn die bedingung erf�llt ist,
		printf("Deine Zahl lautet: %d\n",zahl);												//in diesem Fall, wenn die eingegebene Zahl 42 lautet.
		printf("Noch eine gute weiterreise per Anhalter durch die Galaxie ;-)\n");
	}
	
	else {																					//gegenst�ck zur 'if' anweisung, die else anweisung wird nur ausgef�hrt,
		printf("Deine Zahl lautet: %d\n",zahl);												//wenn die 'if' anweisung nicht erf�llt war.
		printf("Wie heisst du?\n");
		scanf("%s",&name);
		printf("Hallo %s du hast die Pruefung leider nicht bestanden schade :-(\n",name);
		printf("probier es doch nochmal!\n");
	}

	system("pause");																		//prozess pausieren, dass das Fenster nicht sofort nach beendigen
																							//des prozesses geschlossen wird.
	return 0;
}
