/*O processamento de dados textuais, atualmente, é bastante avançado, e já existem 
bibliotecas capazes de auxiliar neste tipo de situação. Elabore um programa que leia 
uma palavra e, se ela tiver número ímpar de caracteres, imprima todas as suas vogais.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chamada(void){
	char y[15];
	int i;
	printf("Escreva uma palavra\n");
	scanf("%s", y);
	if(strlen(y) % 2 == 1){
		for(i=0;i<15;i++){
			if(y[i] == 'a'){
				printf("%c", y[i]);
			}
		}
		for(i=0;i<15;i++){
			if(y[i] == 'e'){
				printf("%c", y[i]);
			}
		}
		for(i=0;i<15;i++){
			if(y[i] == 'i'){
				printf("%c", y[i]);
			}
		}
		for(i=0;i<15;i++){
			if(y[i] == 'o'){
				printf("%c", y[i]);
			}
		}
		for(i=0;i<15;i++){
			if(y[i] == 'u'){
				printf("%c", y[i]);
			}
		}
	}
}
void main(void){
	chamada();
}
