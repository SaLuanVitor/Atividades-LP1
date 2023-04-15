#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
 /*
 4-Desenvolva um programa na Linguagem C que contenha um procedimento que
recebe por par�metro os valores necess�rios para o c�lculo da f�rmula de b�skara
de uma equa��o do segundo grau. Ao final, o programa dever� imprimir as ra�zes
da equa��o, caso seja poss�vel calcular. Devem ser impressas mensagens para os
casos em que a equa��o n�o possua ra�zes reais, possua ra�zes m�ltiplas ou uma
�nica raiz.
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
			printf("N�o � poss�vel realizar equa��o de segundo grau com coeficiente a igual a zero!\n\n");
		}else if(Delta == 0){
			printf("A equa��o possui apenas uma raiz!\n");
			printf("Resultado das ra�zes iguais: %.1f\n", equacaoSegundoGrauX1);
		}else if(Delta > 0){
			printf("A equa��o possui 2 ra�zes reais!\n");
			printf("Resultado das duas ra�zes \nX1= %.1f \nX2= %.1f\n", equacaoSegundoGrauX1, equacaoSegundoGrauX2);
		}else{
			printf("A equa��o n�o possui ra�zes reais!\n");
		}
		
	return 0;
}


