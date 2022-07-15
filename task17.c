/*Os arquivos são recursos que nos permitem realizar o armazenamento persistente de dados, além de armazenar grande volume de informações.
Dessa forma, construa um programa que permita ao usuário gravar dez palavras em um arquivo e, em seguida, 
efetue a leitura do arquivo e apresente o conteúdo na tela*/
#include <stdio.h>
#include <stdlib.h>
void wordInput(int);
int main(){
	int quantity = 0;
	printf("WELCOME TO THE PROGRAM\n");
	system("pause");
	printf("How many words do you want to write?\t");
	scanf("%d", &quantity);
	wordInput(quantity);														
	wordOutput();
}
void wordInput(int copyQuantity){
	char words[copyQuantity][20];
	int i;
	FILE *point1;
	point1 = fopen("task17.txt", "a+");
	while(point1 == NULL){
		printf("Error 1!!");
		exit(0);
	}
	for(i=0;i<copyQuantity;i++){
		printf("Write word number %d\n", i+1);
		scanf("%s", words[i]);
		fflush(stdin);
		fprintf(point1, "%s\n", words[i]);
		
	}
	fclose(point1);	
}
void wordOutput(){
	FILE *point1;
	point1 = fopen("Atividade 17.txt", "a+");
	if(point1 == NULL){
		printf("Erro1!!!");
		exit(0);
	}
	char string1[20];
	char c = fscanf(point1, "%s", string1);
	while(c != EOF){
		printf("%s\n", string1);
		c = fscanf(point1, "%s", string1);
	}
	fclose(point1);
}

