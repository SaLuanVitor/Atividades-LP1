#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*3) Desenvolva um programa, na linguagem de Programa��o C, que leia um conjunto
de valores, imprimindo, para cada valor, o quadrado, o cubo e o valor da raiz
quadrada do n�mero digitado. O la�o de repeti��o dever� ser encerrado, caso o
usu�rio digite um valor menor que zero.*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float numeroQuadradoCuboRaiz, quadrado, cubo, raiz;
	
	do{
		printf("Para saber respectivamente o quadrado, o cubo e a raiz\n");
		printf("Digite um n�mero: ");
		scanf("%f", &numeroQuadradoCuboRaiz);
		
		quadrado = pow(numeroQuadradoCuboRaiz,2);
		cubo = pow(numeroQuadradoCuboRaiz, 3);
		raiz = sqrt(numeroQuadradoCuboRaiz);
		
		printf("O Quadrado do n�mero %.1f: %.1f \n",numeroQuadradoCuboRaiz, quadrado);
		printf("O Cubo do n�mero %.1f: %.1f \n",numeroQuadradoCuboRaiz, cubo);
		printf("A Raiz do n�mero %.1f: %.1f \n",numeroQuadradoCuboRaiz, raiz);
		system("pause");
		system("cls");
	}while(numeroQuadradoCuboRaiz > 0);
	return 0;
}
