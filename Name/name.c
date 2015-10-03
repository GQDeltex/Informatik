#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char name[20];
	char zustand[20];
	char todo[20];
	
	printf("Wie heisst Du?\n");
	scanf("%s",&name);
	printf("Hallo %s\n",name);
	
	printf("\n");
	
	printf("Wie geht es dir?\n");
	scanf("%s",&zustand);
	printf("Mir geht es auch %s\n",zustand);
	
	printf("\n");
	
	printf("Was machst du heute noch so?\n");
	scanf("%s",todo);
	printf("Ich ich betaetige mich heute mit anderen sachen als mit %s\n",todo);
	
	system("pause");
	return 0;
}
