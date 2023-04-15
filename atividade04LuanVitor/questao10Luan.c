#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//10. Escreva um programa que leia uma sequencia de n valores,
//um de cada vez, e imprime a quantidade de valores negativos.

float negativos = 0;

float lerNegativo(float numero){
	if(numero < 0){
		negativos++;
	}
}
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i, numero;	
	do{
		printf("Quantidade contada: %d\n", i);
		printf("Digite um número: ");
		scanf("%i", &numero);
		i++;
		lerNegativo(numero);
		system("cls");
		
	}while(numero != 0);
	printf("Números Negativos: %.2f", negativos);
}
