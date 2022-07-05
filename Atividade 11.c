/*� comum, em uma aplica��o, ter de determinar quais n�meros s�o pares ou �mpares
entre todos os valores de um conjunto de dados. Dessa forma, fa�a um programa
que verifica se determinado n�mero � positivo ou negativo, por meio de uma fun��o. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void converte(int n){
	setlocale(LC_ALL, "Portuguese");
	if(n > 0){
		printf("N�mero digitado � positivo\n");
	}else{
		if(n<0){
			printf("N�mero digitado � negativo\n");
		}else{
			printf("N�mero digitado neutro pois � o 0\n");
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
