#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*3- Faça um programa na Linguagem C, o qual deverá receber, do usuário, 3 valores e os
seus pesos correspondentes e calcular a média ponderada dos valores, apresentando o
resultado ao final do programa.*/


int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float valores[3], pesoValores[3], mediaValores;
	int index;
	for(index = 1; index <= 3; index++){
		printf("\nDigite o %dº valor: ",index);
		scanf("%f", &valores[index]);
		printf("Digite o peso do %dº valor: ", index);
		scanf("%f", &pesoValores[index]);
		
		mediaValores = (valores[index]*pesoValores[index])+ mediaValores;
	}
	printf("\nSua média ponderada é: %.2f", mediaValores/3);
}
