/*Um dos principais benefícios de aprender a programar é o fato de que é possível 
automatizar tarefas repetitivas. Dessa forma, faça um programa que leia uma palavra 
e o número de vezes que se deseja imprimi-la. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void process(){
	char word[15];
	int time=0;
	printf("How many time do you need repeat?\n");
	scanf("%d", &time);
	fflush(stdin);
	
	printf("Write a word:\t\n");
	gets(word);
	fflush(stdin);
	system("cls");
	
	int i=0;
	for(i=0;i<time;i++){
		printf("%s\n", word);
	}
}
void main(void){
	process();
}
