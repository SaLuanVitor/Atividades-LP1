#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
 
/*
7-Desenvolva um programa na Linguagem C que contenha um procedimento para
mostrar na tela os resultados de uma tabuada de um n�mero qualquer. O
procedimento dever� solicitar o n�mero ao usu�rio pelo menos uma vez. O
programa deve ser encerrado quando o usu�rio digitar zero.

*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int quantidade, i, parada;
	float numero, conta;
	
	do{
		printf("Digite o n�mero que deseja fazer a tabu�da: ");
		scanf("%f", &numero);
		printf("At� quanto?: ");
		scanf("%d", &quantidade);
		
		for(i = 0; i <= quantidade; i++){
			conta = i*numero;
			printf("%d x %.1f = %.1f\n", i, numero, conta);
		}
		printf("Deseja parar o programa? digite 0: ");
		scanf("%d", &parada);
		system("pause");
		system("cls");
		
	}while(parada != 0);
}
