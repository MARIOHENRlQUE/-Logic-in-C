/*Um programador que se preze necessita dominar v�rios tipos de estruturas de dados. Uma das estruturas mais importantes, em programas, 
s�o as matrizes. Assim, construa um programa que recebe duas matrizes inteiras de ordem 5 e imprima a 
soma e a diferen�a entre elas*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	int mat1[5][5], mat2[5][5], i, j, soma[5][5], dif[5][5];
	srand(time(NULL));
	//Declara��o das sub rotinas
	void procedimentoDeEntrada(int mat1[5][5], int mat2[5][5]);
	void somaDasMatrizes(int soma[5][5], int mat1[5][5], int mat2[5][5]);
	void difDasMatrizes(int dif[5][5], int mat1[5][5], int mat2[5][5]);
	
	procedimentoDeEntrada(mat1, mat2);
	
	printf("SOMA DAS MATRIZES\t");
	somaDasMatrizes(soma, mat1, mat2);
	printf("\n\n");
	printf("DIFEREN�A DAS MATRIZES\t");
	difDasMatrizes(dif, mat1, mat2);
}
void procedimentoDeEntrada(int mat1[5][5], int mat2[5][5]){
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			mat1[i][j] = rand() % 9 + 1;
			mat2[i][j] = rand() % 9 + 1;
		}	
	}	
}
void somaDasMatrizes(int soma[5][5], int mat1[5][5], int mat2[5][5]){
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
				soma[i][j] = mat1[i][j] + mat2[i][j];
				printf("%d - ", soma[i][j]);
		}	
	}
}
void difDasMatrizes(int dif[5][5], int mat1[5][5], int mat2[5][5]){
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
				dif[i][j] = mat1[i][j] - mat2[i][j];
				printf("%d - ", dif[i][j]);
		}	
	}
}

