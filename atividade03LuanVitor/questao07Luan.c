#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
 
/*
7-Desenvolva um programa na Linguagem C que contenha um procedimento para
mostrar na tela os resultados de uma tabuada de um número qualquer. O
procedimento deverá solicitar o número ao usuário pelo menos uma vez. O
programa deve ser encerrado quando o usuário digitar zero.

*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int quantidade, i, parada;
	float numero, conta;
	
	do{
		printf("Digite o número que deseja fazer a tabuáda: ");
		scanf("%f", &numero);
		printf("Até quanto?: ");
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
