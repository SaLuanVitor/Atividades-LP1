#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*7) Desenvolva um programa, na linguagem de Programação C, que mostre na tela a
tabuada de um número qualquer (Múltiplos até 20). O programa deve solicitar o
número ao usuário pelo menos uma vez. O programa deve ser encerrado quando
o usuário digitar o número zero.*/
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int verificarPergunta, i;
	float numeroTabuar, resultadoMultiplicar;
	
	do{
		printf("Digite um número para construir a tabuáda: ");
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
