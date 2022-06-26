/*J� pensou em facilitar a vida do seu professor, criando um programa que automatize os c�lculos das notas de seus alunos? Sendo assim, fa�a um programa que efetue a 
leitura dos nomes de cinco alunos e, tamb�m, de suas quatro notas bimestrais. Calcule a m�dia de cada aluno e apresente os nomes classificados em ordem crescente de m�dia*/

#include <stdio.h>
#include <stdlib.h>

struct aluno{
	char nome[50];
	int nota[5], media;
};
struct aluno alunos[5], aux;

void limparBuffer(void){
	fflush(stdin);
}

void main(){
	void entradaDeDados(void);
	void calculandoMedia(void);
	void validNome(void);
	entradaDeDados();
	calculandoMedia();
	validNome();
}
void entradaDeDados(void){
	int i, j;
	for(i=0;i<5;i++){
		printf("Digito o nome do aluno %d:\n", i+1);
		gets(alunos[i].nome);
		for(j=0;j<4;j++){
			printf("Digite a nota %d do aluno %d:\n", j+1, i+1);
			scanf("%d", &alunos[i].nota[j]);
			limparBuffer();
		}
	}
}
void calculandoMedia(void){
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			alunos[i].media = alunos[i].media + alunos[i].nota[j];
		}
	}
}
void validNome(void){
	int i, j;
	for(i=0;i<5;i++){
		for(j=i+1;j<4;j++){
			if(alunos[i].media > alunos[j].media){
				aux = alunos[i];
				alunos[i] = alunos[j];
				alunos[j] = aux;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%s", alunos[i].nome);
	}
}








