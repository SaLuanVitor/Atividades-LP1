#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
/*	1-Desenvolva um programa na Linguagem C que contenha um procedimento que
receba 3 valores reais X, Y e Z e que verifique se esses valores podem ser os
comprimentos dos lados de um triângulo. Neste caso, retornar qual o tipo de
triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a
seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é
menor do que a soma do comprimento dos outros dois lados. A identificação do tipo
de triângulo formado obedece às seguintes definições:

	Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
	Triângulo Isósceles: os comprimentos de 2 lados são iguais.
	Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.

	Ao final, o programa deverá imprimir uma mensagem, identificando o tipo de
triângulo. Caso os valores não representem um triângulo, uma mensagem também
deverá ser impressa.
*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float lado[3];
	
	for(i = 1; i <= 3; i++){
		printf("Digite o %dº lado do triangulo em cm: ", i);
		scanf("%f", &lado[i-1]);
	}
	if(((lado[0]+lado[1]) > lado[2])&&((lado[0]+lado[2]) > lado[1])&&((lado[1]+lado[2]) > lado[0])){
	
		if((lado[0] == lado[1]) && (lado[1] == lado[2])){
			printf("Triangulo Equilátero");
		}else if((lado[0] == lado[1]) || (lado[1] == lado[2]) || (lado[2] == lado[0])){
			printf("Triangulo Isósceles");
		}else{
			printf("Triangulo Escaleno");	
		}
	}else{
		printf("Não é possível montar um triangulo!");
	}
	return 0;
}
