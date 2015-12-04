#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float summe(float z1, float z2){
	float s;
	s = z1+z2;
	return s;
}

float differenz(float z1, float z2){
	float d;
	d = z1-z2;
	return d;
}

float produkt(float z1, float z2){
	float p;
	p = z1*z2;
	return p;
}

float quotient(float z1, float z2){
	float q;
	if (z2==0) return (-9999);
	else q = z1/z2;
	return q;
}

int teiler(float z1, float z2){
	float t;
	int i1, i2;
	i1 = (int)z1;
	i2 = (int)z2;
	if (i1%i2 == 0) return (1);
	else return 0;
}

int main(int argc, char *argv[]) {
		float zahl1, zahl2;
		float ergebnis;
		char op;
		
		ergebnis = 0;
		
		while(1>0){
			printf("1.Zahl eingeben\n");
			scanf("%f",&zahl1);
			printf("Waehlen: +, -, *, /, t(eiler), w(urzel)		[q um zu beenden]\n");
			op = getch();
			printf("%c\n",op);
			switch(op){
				case'+':
				case'-':
				case'/':
				case'*':
				case't':
					printf("2.Zahl eingeben\n");
					scanf("%f",&zahl2);
					break;
				default:
					;
			}
			
			switch(op){
				case'+':
					ergebnis = summe(zahl1,zahl2);
					break;
				case'-':
					ergebnis = differenz(zahl1, zahl2);
					break;
				case'/':
					ergebnis = quotient(zahl1, zahl2);
					break;
				case'*':
					ergebnis = produkt(zahl1, zahl2);
					break;
				case't':
					ergebnis = teiler(zahl1, zahl2);
					break;
				case'w':
					ergebnis = sqrt(zahl1);
					break;
				case'q':
					return 0;
				default:
					printf("Nicht implementiert");
			}
			printf("%f\n\n",ergebnis);
			}
		return 0;
		}

