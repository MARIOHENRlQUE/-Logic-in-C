/*� muito comum que programas tenham de implementar funcionalidades para identificar caracter�sticas espec�ficas e, assim, 
realizar opera��es sobre um conjunto de
dados. Dessa forma, fa�a um programa com uma fun��o que apresente o somat�rio dos N primeiros n�meros pares, 
definidos por um operador. O valor de N ser�
informado pelo usu�rio.*/
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
		printf("Escreva o numero da posi��o %d:\t", i+1);
		scanf("%d", &n2[i]);
		fflush(stdin);
		if(n2[i] % 2 == 0){
			soma = soma + n2[i];
		}
	}
	system("cls");
	printf("Soma de todos os pares igual a %d", soma);
}
