/*Imagine que você está desenvolvendo uma pequena funcionalidade dentro de um
programa que será utilizado como processador de texto. Assim sendo, escreva uma
função que receba um caractere e retorne zero se for vogal ou 1 se for uma consoante, um número ou caractere especial.*/

#include <stdio.h>
#include <stdlib.h>
void retorno(char x);
void main(){
	char c;
	int r=0;
	printf("Escreva uma letra:\n");
	scanf("%c", &c);
	fflush(stdin);
	retorno(c);
}
void retorno(char x){
	int y = 0;
	if(x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'O' || x == "o" || x == 'U' || x == 'u'){
		y = 0;
		printf("%d", y);
	}else{
		y = 1;
		printf("%d", y);
	}
}

