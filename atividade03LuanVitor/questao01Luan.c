#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
/*	1-Desenvolva um programa na Linguagem C que contenha um procedimento que
receba 3 valores reais X, Y e Z e que verifique se esses valores podem ser os
comprimentos dos lados de um tri�ngulo. Neste caso, retornar qual o tipo de
tri�ngulo formado. Para que X, Y e Z formem um tri�ngulo � necess�rio que a
seguinte propriedade seja satisfeita: o comprimento de cada lado de um tri�ngulo �
menor do que a soma do comprimento dos outros dois lados. A identifica��o do tipo
de tri�ngulo formado obedece �s seguintes defini��es:

	Tri�ngulo Equil�tero: os comprimentos dos 3 lados s�o iguais.
	Tri�ngulo Is�sceles: os comprimentos de 2 lados s�o iguais.
	Tri�ngulo Escaleno: os comprimentos dos 3 lados s�o diferentes.

	Ao final, o programa dever� imprimir uma mensagem, identificando o tipo de
tri�ngulo. Caso os valores n�o representem um tri�ngulo, uma mensagem tamb�m
dever� ser impressa.
*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float lado[3];
	
	for(i = 1; i <= 3; i++){
		printf("Digite o %d� lado do triangulo em cm: ", i);
		scanf("%f", &lado[i-1]);
	}
	if(((lado[0]+lado[1]) > lado[2])&&((lado[0]+lado[2]) > lado[1])&&((lado[1]+lado[2]) > lado[0])){
	
		if((lado[0] == lado[1]) && (lado[1] == lado[2])){
			printf("Triangulo Equil�tero");
		}else if((lado[0] == lado[1]) || (lado[1] == lado[2]) || (lado[2] == lado[0])){
			printf("Triangulo Is�sceles");
		}else{
			printf("Triangulo Escaleno");	
		}
	}else{
		printf("N�o � poss�vel montar um triangulo!");
	}
	return 0;
}
