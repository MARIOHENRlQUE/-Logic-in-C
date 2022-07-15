//Fgets and Fputs
#include <stdio.h>
#include <stdlib.h>
void main(){
	FILE *point1, *point2;
	point1 = fopen("task10.txt", "w");
	while(point1 == NULL){
		printf("Sorry, we can´t open paste ArquivoString.txt\n");
		exit(0);
	}
	char c[50];
	printf("Write a phrase\n");
	fgets(c, 50, stdin);
	fflush(stdin);
	
	
	if(1){
		char aux = fputs(c, point1);
		if(aux == EOF){
			printf("Error! We can´t put phrase in ArquivoString.txt");
			exit(0);
		}	
	}else{
		printf("Error!!");
	}
	fclose(point1);
	
	system("cls");
	
	point2 = fopen("ArquivoString.txt", "r");
	while(point2 == NULL){
		printf("Sorry, we can´t open paste ArquivoString.txt\n");
		exit(0);
	}
	
	char b[50];
	if(1){
		fgets(b, 50, point2);
		printf("%s", b);
	}else{
		printf("Error!!");
	}
	
	fclose(point2);
}
