#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*2- Fa�a um programa na Linguagem C, o qual dever� receber, do usu�rio, 3 valores, calcular
a m�dia aritm�tica dos valores, apresentando o resultado ao final do programa*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int index;
	float contarValores, mediaAritmetica;
	
	for(index = 1; index <= 3; index++){
		printf("Digite o %d� valor: ", index);
		scanf("%f", &contarValores);
		mediaAritmetica = mediaAritmetica + contarValores;
	}
	mediaAritmetica = mediaAritmetica/3.0;
	
	printf("A m�dia das dos valores �: %.2f", mediaAritmetica);
	
}
