#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*5) Desenvolva um programa, na linguagem de Programa��o C, que leia v�rios
conjuntos de coeficientes a, b e c e, para cada conjunto, calcular as ra�zes de uma
equa��o do segundo grau. Devem ser impressas mensagens para os casos em
que a equa��o n�o tem ra�zes reais, ra�zes m�ltiplas ou raiz �nica. Ap�s o c�lculo
de cada conjunto, deve ser perguntado ao usu�rio se ele deseja continuar.
Lembrando que:
*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int validarPergunta;
	char pergunta = 'S';
	float coeficienteA, coeficienteB, coeficienteC, delta, raiz,equacaoSegundoGrauX1, equacaoSegundoGrauX2; 
	do{
		printf("Digite o valor do coefiente a: ");
		scanf("%f", &coeficienteA);
		printf("Digite o valor do coefiente b: ");
		scanf("%f", &coeficienteB);
		printf("Digite o valor do coefiente c: \n");
		scanf("%f", &coeficienteC);
		
		delta = pow(coeficienteB,2) - (4*coeficienteA*coeficienteC);
		raiz = sqrt(delta);
		printf("%f\n", delta);
		
		equacaoSegundoGrauX1 = ((-1*coeficienteB)+(raiz))/2*coeficienteA;
		equacaoSegundoGrauX2 = ((-1*coeficienteB)-(raiz))/2*coeficienteA;
		
		if(coeficienteA == 0){
			printf("N�o � poss�vel realizar equa��o de segundo grau com coeficiente a igual a zero!\n\n");
		}else if(delta == 0){
			printf("A equa��o possui apenas uma raiz!\n");
			printf("Resultado das ra�zes iguais: %.1f\n", equacaoSegundoGrauX1);
		}else if(delta > 0){
			printf("A equa��o possui 2 ra�zes reais!\n");
			printf("Resultado das duas ra�zes \nX1= %.1f \nX2= %.1f\n", equacaoSegundoGrauX1, equacaoSegundoGrauX2);
		}else{
			printf("A equa��o n�o possui ra�zes reais!\n");
		}
		
		system("Pause");
		system("cls");
		
		validarPergunta = 0;
		do{
			printf("Deseja continuar?[S/N]: ");
			scanf("%s", &pergunta);
			fflush(stdin);
			validarPergunta++;
			
			if(pergunta == 'S' || pergunta == 's' || pergunta == 'n' || pergunta == 'N'){
				validarPergunta = 0;	
			}else{
				printf("Digite uma op��o v�lida 'S' ou 'N'\n");
				validarPergunta++;
				
				system("Pause");
				system("cls");
			}
		}while(validarPergunta > 1);
		
	}while(pergunta == 's' || pergunta == 'S' );
}
