/*Com o surgimento dos smartphones, a funcionalidade de agenda eletrônica passou a fazer parte do cotidiano das pessoas, de modo geral. Pensando em 
um protótipo de agenda, faça um programa para efetuar o cadastro de 30 contatos. O cadastro deve conter as seguintes informações: nome, telefone e 
e-mail. Apresente todos os cadastros*/
#include <stdio.h>
#include <stdlib.h>

struct contato{
	char nome[50], email[50], telefone[50];
};
struct contato contatos[2];
void main(void){
	fflush(stdin);
	void entradaDeDados(void);
	void saidaDeDados(void);
	entradaDeDados();
	fflush(stdin);
	system("cls");
	saidaDeDados();
	
}
void entradaDeDados(void){
	int i, j;
	printf("Vamos começar os cadastros\n");
	for(i=0;i<2;i++){
		printf("Contato %d\n", i+1);
		printf("\n");
		printf("Digite o nome:\t");
		gets(contatos[i].nome);
		fflush(stdin);
		printf("Digite o email:\t");
		gets(contatos[i].email);
		fflush(stdin);
		printf("Digite o tefone:\t");
		gets(contatos[i].telefone);
		fflush(stdin);
		printf("\n\n");
	}
	fflush(stdin);
}
void saidaDeDados(void){
	int i, j;
	printf("Livros Cadastrados \n");
	for(i=0;i<2;i++){
		printf("nome: %s\n", contatos[i].nome);
		printf("Email: %s\n", contatos[i].email);
		printf("telefone: %s\n", contatos[i].telefone);
		printf("\n\n");
	}
}
