#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*7) Desenvolva um programa, na linguagem de Programa��o C, que mostre na tela a
tabuada de um n�mero qualquer (M�ltiplos at� 20). O programa deve solicitar o
n�mero ao usu�rio pelo menos uma vez. O programa deve ser encerrado quando
o usu�rio digitar o n�mero zero.*/
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int verificarPergunta, i;
	float numeroTabuar, resultadoMultiplicar;
	
	do{
		printf("Digite um n�mero para construir a tabu�da: ");
		scanf("%f",&numeroTabuar);
		i = 0;
		while(i <= 20){
			resultadoMultiplicar = numeroTabuar * i;
			printf("%.1f x %d = %.1f\n",numeroTabuar,i, resultadoMultiplicar);
			i++;
		}
		printf("\nDeseja parar o programa? digite 0(ZERO)\n");
		scanf("%d",&verificarPergunta);
		system("Pause");
		system("cls");
	}while(verificarPergunta !=0);
	
}
