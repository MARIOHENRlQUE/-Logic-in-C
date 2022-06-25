/*É comum que um programa seja capaz de realizar a ordenação de elementos ou 
dados de forma a facilitar as operações futuras e a apresentação deste conjunto de 
dados. Assim sendo, escreva um programa que leia um vetor A e o apresente em 
ordem decrescente. */
#include <stdio.h>
#include <stdlib.h>
void main(){
	int x=0, i=0, aux=0, j=0;
	printf("How many numbers do you want for your array?\n");
	scanf("%d", &x);
	int vetorA[x];
	for(i=0;i<x;i++){		
		printf("Write arrays number\t");
		scanf("%d", &vetorA[i]);
		fflush(stdin);
	}
	for(i=0;i<x;i++){
		for(j=i+1;j<x;j++){
			if(vetorA[i] < vetorA[j]){
				aux = vetorA[i];
				vetorA[i] = vetorA[j];
				vetorA[j] = aux;
			}
		}
	}
	printf("A ordem ficou:\n");
	for(i=0;i<x;i++){		
		printf("%d\n", vetorA[i]);
	}
}


