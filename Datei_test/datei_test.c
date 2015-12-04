#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char eingabe;
	int text;
	int temp;
	
	text=1;
	
	FILE *fp;
	do{
	printf("Datei schreiben oder lesen? 1/0\n");
	scanf("%s",&eingabe);
	switch(eingabe){
		case'1':
			if(fp==NULL){
				printf("Error");
			}
			else{
				fp = fopen("test.txt","w");
				fprintf(fp, "Hallo!\n");
				printf("fertig");
				fputc(10, fp);
				fclose(fp);
			}
		
		case'0':
			if(fp==NULL){
				printf("Error");
			}
			else{
				fp = fopen("test.txt","r");
				while(temp=fgetc(fp)!=EOF){
					printf("%c",temp);
				}
				fclose(fp);
			}
		default:
			return 0;
	}
	}while(1>0);
	
	
	return 0;
}
