#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//5. Escreva um programa que receba tr�s valores (a, b, c) e fa�a a
//soma entre eles. Multiplique o resultado da soma por cada
//entrada separadamente e imprima os resultados

float somaValores(float a, float b, float c){
	float soma;
	soma = a + b + c;
	return soma;
}
float multiplicaValores(float primeiroValor, float segundoValor){
	float multiplica;
	multiplica = primeiroValor * segundoValor;
	return multiplica;
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float soma, numeros[3];
	
	for(i = 0; i < 3; i++){
		printf("Digite o %d� valor: ", i+1);
		scanf("%f", &numeros[i]);
	}
	soma = somaValores(numeros[0], numeros[1], numeros[2]);
	
	printf("A soma dos valores �: %.2f\n", soma);
	printf("Condi��o 1: %.2f\n", multiplicaValores(soma,numeros[0]));
	printf("Condi��o 2: %.2f\n", multiplicaValores(soma,numeros[1]));
	printf("Condi��o 3: %.2f\n", multiplicaValores(soma,numeros[2]));
}
