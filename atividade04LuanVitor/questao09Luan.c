#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//9. Faça um programa que leia uma quantidade não determinada de
//números positivos. Calcule e imprima a quantidade de números
//pares e ímpares, a média dos valores pares e a média dos valores
//impares. O número que encerrará a leitura será zero.
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
		printf("Digite um número: ");
		scanf("%i", &numero);
		i++;
		contarParImpar(numero);
		system("cls");
		
	}while(numero >= 0);
	printf("Números pares: %d \nNúmeros ímpares: %d", contarPar, contarImpar);
}
