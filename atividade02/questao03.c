#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*3) Desenvolva um programa, na linguagem de Programação C, que leia um conjunto
de valores, imprimindo, para cada valor, o quadrado, o cubo e o valor da raiz
quadrada do número digitado. O laço de repetição deverá ser encerrado, caso o
usuário digite um valor menor que zero.*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float numeroQuadradoCuboRaiz, quadrado, cubo, raiz;
	
	do{
		printf("Para saber respectivamente o quadrado, o cubo e a raiz\n");
		printf("Digite um número: ");
		scanf("%f", &numeroQuadradoCuboRaiz);
		
		quadrado = pow(numeroQuadradoCuboRaiz,2);
		cubo = pow(numeroQuadradoCuboRaiz, 3);
		raiz = sqrt(numeroQuadradoCuboRaiz);
		
		printf("O Quadrado do número %.1f: %.1f \n",numeroQuadradoCuboRaiz, quadrado);
		printf("O Cubo do número %.1f: %.1f \n",numeroQuadradoCuboRaiz, cubo);
		printf("A Raiz do número %.1f: %.1f \n",numeroQuadradoCuboRaiz, raiz);
		system("pause");
		system("cls");
	}while(numeroQuadradoCuboRaiz > 0);
	return 0;
}
