#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*5) Desenvolva um programa, na linguagem de Programação C, que leia vários
conjuntos de coeficientes a, b e c e, para cada conjunto, calcular as raízes de uma
equação do segundo grau. Devem ser impressas mensagens para os casos em
que a equação não tem raízes reais, raízes múltiplas ou raiz única. Após o cálculo
de cada conjunto, deve ser perguntado ao usuário se ele deseja continuar.
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
			printf("Não é possível realizar equação de segundo grau com coeficiente a igual a zero!\n\n");
		}else if(delta == 0){
			printf("A equação possui apenas uma raiz!\n");
			printf("Resultado das raízes iguais: %.1f\n", equacaoSegundoGrauX1);
		}else if(delta > 0){
			printf("A equação possui 2 raízes reais!\n");
			printf("Resultado das duas raízes \nX1= %.1f \nX2= %.1f\n", equacaoSegundoGrauX1, equacaoSegundoGrauX2);
		}else{
			printf("A equação não possui raízes reais!\n");
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
				printf("Digite uma opção válida 'S' ou 'N'\n");
				validarPergunta++;
				
				system("Pause");
				system("cls");
			}
		}while(validarPergunta > 1);
		
	}while(pergunta == 's' || pergunta == 'S' );
}
