/*� poss�vel criar sistemas para organiza��o e controle de estoque nas mais diversas �reas. Assim sendo, elabore um programa para efetuar o cadastro de 
20 livros e imprimi-los. O cadastro deve conter as seguintes informa��es: t�tulo, autor, editora, edi��o e ano*/
#include <stdio.h>
#include <stdlib.h>

struct livro{
	char titulo[50], autor[50], editora[50];
	int edicao, ano;
};
struct livro livros[2];
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
	printf("Vamos come�ar os cadastros\n");
	for(i=0;i<2;i++){
		printf("Cadatrando o livro %d\n", i+1);
		printf("\n");
		printf("Digite o titulo:\t");
		gets(livros[i].titulo);
		fflush(stdin);
		//fgets(livros[i].titulo, 50, stdin);
		printf("Digite o autor:\t");
		gets(livros[i].autor);
		fflush(stdin);
		//fgets(livros[i].autor, 50, stdin);
		printf("Digite a editora:\t");
		gets(livros[i].editora);
		fflush(stdin);
		//fgets(livros[i].editora, 50, stdin);
		printf("Digite o numero de edi��o:\t");
		scanf("%d", &livros[i].edicao);
		fflush(stdin);
		printf("Digite o ano de lan�amento:\t");
		scanf("%d", &livros[i].ano);
		fflush(stdin);
		printf("\n\n");
	}
	fflush(stdin);
}
void saidaDeDados(void){
	int i, j;
	printf("Livros Cadastrados \n");
	for(i=0;i<2;i++){
		printf("Titulo: %s\n", livros[i].titulo);
		printf("Autor: %s\n", livros[i].autor );
		printf("Editora: %s\n", livros[i].editora);
		printf("Edi��o: %d\n", livros[i].edicao );
		printf("Ano de lan�amento: %d\n", livros[i].ano);
		printf("\n\n");
	}
}










