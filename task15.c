/*No jardim de infância, durante o processo de ensino e aprendizagem, 
um professor costuma ensinar o tema “vogais e consoantes” de maneira bastante lúdica.
Para auxiliar o professor, construa uma função que receba um nome e retorne o número de vogais*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 20
int rtNumberVowels(char x[TAM]);
void LimparBuffer();
void main(){
	char wordInput[TAM];
	printf("Write a word:\t");
	scanf("%s", wordInput);
	LimparBuffer();
	rtNumberVowels(wordInput);
	printf("Resultado: %d", rtNumberVowels(wordInput));
}
int rtNumberVowels(char x[TAM]){
	int i, count = 0;
	for(i=0;i<TAM;i++){
		if(x[i]=='a' || x[i]=='A' || x[i]=='e' || x[i]=='E' || x[i]=='i' ||
		 x[i]=='I' || x[i]=='o' || x[i]=='O' || x[i]=='u' || x[i]=='U'){
			count = count + 1;
		}
	}
	return count;
}
void LimparBuffer(){
	fflush(stdin);
}
