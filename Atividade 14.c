/*É muito comum que programas tenham de implementar funcionalidades para identificar características específicas e, assim, 
realizar operações sobre um conjunto de
dados. Dessa forma, faça um programa com uma função que apresente o somatório dos N primeiros números pares, 
definidos por um operador. O valor de N será
informado pelo usuário.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void somatorio(int);
void main(){
	setlocale(LC_ALL, "Portuguese");
	int n1;
	printf("Quantos numeros quer digitar?\t");
	scanf("%d", &n1);
	fflush(stdin);
	system("cls");
	somatorio(n1);	
}
void somatorio(int n1){
	int soma, i, n2[n1];
	for(i=0;i<n1;i++){
		printf("Escreva o numero da posição %d:\t", i+1);
		scanf("%d", &n2[i]);
		fflush(stdin);
		if(n2[i] % 2 == 0){
			soma = soma + n2[i];
		}
	}
	system("cls");
	printf("Soma de todos os pares igual a %d", soma);
}
