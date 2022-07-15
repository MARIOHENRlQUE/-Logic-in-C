#include <stdio.h>
#include <stdlib.h>
void main(){
	int x=0, y=0, i=0, quant=0;
	printf("Quantos numeros vai querer guardar no vetor 1?\n");
	scanf("%d", &x);
	fflush(stdin);
	printf("Quantos numeros vai querer guardar no vetor 2?\n");
	scanf("%d", &y);
	fflush(stdin);
	
	int vetorA[x], vetorB[y];
	for(i=0;i<5;i++){
		printf("Digite o numero %d do vetor 1:\n", i+1);
		scanf("%d", &vetorA[i]);
		system("cls");
	}
		for(i=0;i<5;i++){
		printf("Digite o numero %d do vetor 1:\n", i+1);
		scanf("%d", &vetorB[i]);
		system("cls");
	}
	
	for(i=0;i<x;i++){
		if(vetorA[i] != vetorB[i]){
			quant++;
		}
	}
	printf("Existem %d numeros diferentes do vetor A comparado com o B\n", quant);
}
