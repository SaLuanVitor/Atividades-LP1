#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*2- Faça um programa na Linguagem C, o qual deverá receber, do usuário, 3 valores, calcular
a média aritmética dos valores, apresentando o resultado ao final do programa*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int index;
	float contarValores, mediaAritmetica;
	
	for(index = 1; index <= 3; index++){
		printf("Digite o %dº valor: ", index);
		scanf("%f", &contarValores);
		mediaAritmetica = mediaAritmetica + contarValores;
	}
	mediaAritmetica = mediaAritmetica/3.0;
	
	printf("A média das dos valores é: %.2f", mediaAritmetica);
	
}
