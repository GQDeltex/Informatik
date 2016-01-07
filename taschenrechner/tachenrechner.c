#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int zahl1,zahl2;
	int ergebnis;
	
	char op[2];
	while(1>0){
		printf("Zahl eingeben:\n");
		scanf("%d",&zahl1);
		printf("Erlaubte Rechenzeichen:+,-,*,/\n");
		scanf("%s",&op);
		
		switch (op[0]){
			case '+':
				printf("2.Zahl eingeben:\n");
				scanf("%d",&zahl2);
				ergebnis =zahl1+zahl2;
				break;
			case '-':
				printf("2.Zahl eingeben:\n");
				scanf("%d",&zahl2);
				ergebnis =zahl1-zahl2;
				break;
			case '/':
				printf("2.Zahl eingeben:\n");
				scanf("%d",&zahl2);
				ergebnis =zahl1/zahl2;
				break;
			case '*':
				printf("2.Zahl eingeben:\n");
				scanf("%d",&zahl2);
				ergebnis =zahl1*zahl2;
				break;
			case 'e':
				return 0;
			default:
				printf("nicht erlaubt");
		}
		printf("Ergebnis: %d \n\n",ergebnis);
	}
	return 0;
}
