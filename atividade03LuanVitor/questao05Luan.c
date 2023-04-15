#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*
5-Desenvolva um programa na Linguagem C que contenha uma função que recebe
a média final de um aluno por parâmetro e retorna o seu conceito, conforme a tabela
abaixo:
Nota Conceito
de 0,0 a 4,9 D
de 5,0 a 6,9 C
de 7,0 a 8,9 B
de 9,0 a 10,0 A
Ao final, o programa deverá imprimir uma mensagem mostrando o valor da média
final e o conceito alcançado pelo aluno.

*/

float mediaAluno(float nota01, float nota02, float nota03){
	float media;
	
	media = (nota01+nota02+nota03)/3;
	
	return media;
}

char notaConceito(float media){
	if(media >= 0 && media <= 4.9){
		printf("Conceito D");
	}else if(media >= 5 && media <= 6.9){
		printf("Conceito C");
	}else if(media >= 7 && media <= 8.9){
		printf("Conceito B");
	}else if(media >= 9 && media <= 10){
		printf("Conceito A");
	}else{
		printf("Erro valores fora do padrão:\n");
		printf("Digite valores de 0 a 10 nas notas!");
	}
	
	return 0;
}
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float nota[3];
	
	for(i = 1; i <= 3; i++){
		printf("Digite o valor da %dº nota: ", i);
		scanf("%f", &nota[i-1]);
	}
	
	notaConceito(mediaAluno(nota[0],nota[1],nota[2]));
}
