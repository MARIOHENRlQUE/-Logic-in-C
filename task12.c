/*Provavelmente, voc� j� deve ter se deparado com uma situa��o na qual � preciso
calcular o somat�rio de valores compreendidos dentro de um intervalo determinado.
Por isso, elabore uma fun��o que receba dois n�meros positivos por par�metro e
retorne a soma dos N n�meros inteiros existentes entre eles.*/

#include <stdio.h>
#include <stdlib.h>
 int soma(x1, x2){
	int i, resu=0;
	for(i=x1+1;i<x2;i++){
		resu = resu + i;
	}
	return resu;
}
void main(){
	int resultado, n1, n2;
	printf("Digite o primeiro numero positivo:\n");
	scanf("%d", &n1);
	while(n1 <= 0){
		printf("Digite o primeiro numero positivo:\n");
		scanf("%d", &n1);
	}
	printf("Digite o segundo numero positivo\n");
	scanf("%d", &n2);
	while(n2 <= 0){
		printf("Digite o segundo numero positivo:\n");
		scanf("%d", &n1);
	}
	resultado = soma(n1, n2);
	
	printf("%d", resultado);
}
