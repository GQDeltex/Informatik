#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	unsigned char c;
	
	printf("Dieses Programm ermittelt die Tastencodes\n");
	printf("Nach dr""\x81""cken einer Taste, wird der Tastencode als Dezimalzahl abgebildet\n");
	printf("Das Programm kann durch 'Esc' beendet werden\n");
	
	do
	{
		c = getch();
		printf("Gedr""\x81""ckt: %c Code(Dezimal): %u\n", c, c);
	}while (c!=27);
	
	return 0;
}
