#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*3- Fa�a um programa na Linguagem C, o qual dever� receber, do usu�rio, 3 valores e os
seus pesos correspondentes e calcular a m�dia ponderada dos valores, apresentando o
resultado ao final do programa.*/


int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float valores[3], pesoValores[3], mediaValores;
	int index;
	for(index = 1; index <= 3; index++){
		printf("\nDigite o %d� valor: ",index);
		scanf("%f", &valores[index]);
		printf("Digite o peso do %d� valor: ", index);
		scanf("%f", &pesoValores[index]);
		
		mediaValores = (valores[index]*pesoValores[index])+ mediaValores;
	}
	printf("\nSua m�dia ponderada �: %.2f", mediaValores/3);
}
