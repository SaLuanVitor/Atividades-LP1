#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*1- Faça um programa na Linguagem C, o qual deverá receber, do usuário, um número inteiro
e verificar se é par ou ímpar, apresentando o resultado ao final do programa. */


int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int verificarNumero;
	
	printf("Digite um número inteiro para verificar se é ímpar ou par: ");
	scanf("%d", &verificarNumero);
	
	if(verificarNumero%2 == 0){
		printf("O número %d é par!", verificarNumero);
	}
	else{
		printf("O número %d é ímpar!", verificarNumero);
	}
}
