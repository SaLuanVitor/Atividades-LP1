#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*1- Fa�a um programa na Linguagem C, o qual dever� receber, do usu�rio, um n�mero inteiro
e verificar se � par ou �mpar, apresentando o resultado ao final do programa. */


int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int verificarNumero;
	
	printf("Digite um n�mero inteiro para verificar se � �mpar ou par: ");
	scanf("%d", &verificarNumero);
	
	if(verificarNumero%2 == 0){
		printf("O n�mero %d � par!", verificarNumero);
	}
	else{
		printf("O n�mero %d � �mpar!", verificarNumero);
	}
}
