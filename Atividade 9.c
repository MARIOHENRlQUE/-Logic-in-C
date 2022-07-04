//Fgetc and Fputc
#include <stdio.h>
#include <stdlib.h>
void main(){
	FILE *Ar, *Ar2;
	Ar = fopen("Atividade 9.txt", "w");
	while(Ar == NULL){
		printf("We can´t open the paste\n");
		exit(0);
	}
	char c[50];
	printf("Write a phrase:\n");
	fgets(c, 50, stdin);
	fflush(stdin);
	
	int i; 
	char a;
	for(i=0;i<=strlen(c);i++){
		a = fputc(c[i], Ar);
		if(a == EOF){
			printf("We can´t put phrase into ArquivoCaractere.txt");
		}
	}
	fclose(Ar);
	
	system("cls");
	Ar2 = fopen("ArquivoCaractere.txt", "r");
	while(Ar2 == NULL){
		printf("We can´t open the paste\n");
		exit(0);
	}
	char b = fgetc(Ar2);
	while(b != EOF){
		printf("%c", b);
		b = fgetc(Ar2);
	}
	fclose(Ar2);
}
