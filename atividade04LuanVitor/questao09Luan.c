#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//9. Fa�a um programa que leia uma quantidade n�o determinada de
//n�meros positivos. Calcule e imprima a quantidade de n�meros
//pares e �mpares, a m�dia dos valores pares e a m�dia dos valores
//impares. O n�mero que encerrar� a leitura ser� zero.
int contarImpar = 0, contarPar = 0, par =2;

int contarParImpar(int numero){
	if(numero > 0){
		 if(numero % 2 == 0 ){
			contarPar++;
		}else{
			contarImpar++;
		}
	}
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i, numero;	
	do{
		printf("Quantidade contada: %d\n", i);
		printf("Digite um n�mero: ");
		scanf("%i", &numero);
		i++;
		contarParImpar(numero);
		system("cls");
		
	}while(numero >= 0);
	printf("N�meros pares: %d \nN�meros �mpares: %d", contarPar, contarImpar);
}
