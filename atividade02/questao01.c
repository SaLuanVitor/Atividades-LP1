#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*1) Desenvolva um programa, na linguagem de Programa��o C, que leia 20 valores
inteiros, um de cada vez, e que fa�a a contagem de quantos deles est�o no intervalo
[20,40] e quantos deles est�o fora do intervalo. Ao final, o programa dever� imprimir
o resultado apurado.*/

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, armazenaValor,contadorDentroIntervalo = 0, contadorForaIntervalo = 0;
	
	for(i=1; i <= 20; i++){
		printf("Digite o %d� valor: ", i);
		scanf("%d", &armazenaValor);
		if(armazenaValor >= 20 && armazenaValor <= 40){
			contadorDentroIntervalo++;
		}else{
			contadorForaIntervalo++;
		}
	}
	
	printf("Quantidade de valores dentro do intervalo [20,40]: %d\n",contadorDentroIntervalo);
	printf("Quantidade de valores fora do intervalo: %d",contadorForaIntervalo);
	return 0;
}
