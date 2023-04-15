#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//4. Escreva um programa que receba dois valores (a, b) e imprima os
//resultados da multiplicação e da média aritmética desses números

float multiplicaNum(float a, float b){
	float multiplicacao;
	multiplicacao = a * b;
	return multiplicacao;
}

float mediaAritmetica(float a, float b){
	float media;
	media = (a+b)/2;
	return media;
}
int main(void){
	setlocale(LC_ALL, "Portuguese");
	float a, b, multiplicacao, media;
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	
	multiplicacao = multiplicaNum(a, b);
	media = mediaAritmetica(a, b);
	
	printf("A Multiplicação dos valores é: %.2f\n", multiplicacao);
	printf("A media dos valores é: %.2f\n", media);
}
