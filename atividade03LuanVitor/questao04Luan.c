#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
 /*
 4-Desenvolva um programa na Linguagem C que contenha um procedimento que
recebe por parâmetro os valores necessários para o cálculo da fórmula de báskara
de uma equação do segundo grau. Ao final, o programa deverá imprimir as raízes
da equação, caso seja possível calcular. Devem ser impressas mensagens para os
casos em que a equação não possua raízes reais, possua raízes múltiplas ou uma
única raiz.
 */
 


float delta(float coeficienteA, float coeficienteB, float coeficienteC){
	float delta;
	delta = pow(coeficienteB,2)-4.0*coeficienteA*coeficienteC;
	
	
	return (delta);
}

float equacao2Grau(int tipo, float coeficienteA, float coeficienteB, float coeficienteC){
	float resultadoEquacao, raiz;
	
	raiz = delta(coeficienteA, coeficienteB, coeficienteC);
	if(tipo == 1){
		resultadoEquacao = ((-1*coeficienteB)+(raiz))/2*coeficienteA;
	}else if(tipo == 2){
		resultadoEquacao = ((-1*coeficienteB)-(raiz))/2*coeficienteA;
	}
	
	return (resultadoEquacao);
}


int main(void){
	setlocale(LC_ALL, "Portuguese");
	float Delta, equacaoSegundoGrauX1, equacaoSegundoGrauX2, coeficienteA, coeficienteB, coeficienteC;
	
		printf("Digite o coeficiente A: ");
		scanf("%f", &coeficienteA);
		printf("Digite o coeficiente B: ");
		scanf("%f", &coeficienteB);
		printf("Digite o coeficiente C: ");
		scanf("%f", &coeficienteC);

		equacaoSegundoGrauX1 = equacao2Grau(1,coeficienteA, coeficienteB, coeficienteC);
		equacaoSegundoGrauX2 = equacao2Grau(2,coeficienteA, coeficienteB, coeficienteC);
		
		if(coeficienteA == 0){
			printf("Não é possível realizar equação de segundo grau com coeficiente a igual a zero!\n\n");
		}else if(Delta == 0){
			printf("A equação possui apenas uma raiz!\n");
			printf("Resultado das raízes iguais: %.1f\n", equacaoSegundoGrauX1);
		}else if(Delta > 0){
			printf("A equação possui 2 raízes reais!\n");
			printf("Resultado das duas raízes \nX1= %.1f \nX2= %.1f\n", equacaoSegundoGrauX1, equacaoSegundoGrauX2);
		}else{
			printf("A equação não possui raízes reais!\n");
		}
		
	return 0;
}


