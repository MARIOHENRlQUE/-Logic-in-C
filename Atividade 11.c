/*É comum, em uma aplicação, ter de determinar quais números são pares ou ímpares
entre todos os valores de um conjunto de dados. Dessa forma, faça um programa
que verifica se determinado número é positivo ou negativo, por meio de uma função. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void converte(int n){
	setlocale(LC_ALL, "Portuguese");
	if(n > 0){
		printf("Número digitado é positivo\n");
	}else{
		if(n<0){
			printf("Número digitado é negativo\n");
		}else{
			printf("Número digitado neutro pois é o 0\n");
		}
	}
	return;
}
void  arquivando(int x){
	FILE *point1;
	point1 = fopen("Atividade 11.txt", "a+");
	while(point1 == NULL){
		printf("Erro ao abrir arquivo;");
	}
	fseek(point1, 1*sizeof(int), SEEK_SET);
	fprintf(point1, "Numero digitado: %d\n", x);
	fclose(point1);
}

int main(){
	int numorigem;
	printf("Digite um numero:\n");
	scanf("%d", &numorigem);
	fflush(stdin);
	converte(numorigem);
	arquivando(numorigem);
	
	return 0;
}
